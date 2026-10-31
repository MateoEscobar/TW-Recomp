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

// Function: sub_00482668
// Address: 0x482668 - 0x4827b8
void sub_00482668_0x482668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482668_0x482668");
#endif

    switch (ctx->pc) {
        case 0x482668u: goto label_482668;
        case 0x48266cu: goto label_48266c;
        case 0x482670u: goto label_482670;
        case 0x482674u: goto label_482674;
        case 0x482678u: goto label_482678;
        case 0x48267cu: goto label_48267c;
        case 0x482680u: goto label_482680;
        case 0x482684u: goto label_482684;
        case 0x482688u: goto label_482688;
        case 0x48268cu: goto label_48268c;
        case 0x482690u: goto label_482690;
        case 0x482694u: goto label_482694;
        case 0x482698u: goto label_482698;
        case 0x48269cu: goto label_48269c;
        case 0x4826a0u: goto label_4826a0;
        case 0x4826a4u: goto label_4826a4;
        case 0x4826a8u: goto label_4826a8;
        case 0x4826acu: goto label_4826ac;
        case 0x4826b0u: goto label_4826b0;
        case 0x4826b4u: goto label_4826b4;
        case 0x4826b8u: goto label_4826b8;
        case 0x4826bcu: goto label_4826bc;
        case 0x4826c0u: goto label_4826c0;
        case 0x4826c4u: goto label_4826c4;
        case 0x4826c8u: goto label_4826c8;
        case 0x4826ccu: goto label_4826cc;
        case 0x4826d0u: goto label_4826d0;
        case 0x4826d4u: goto label_4826d4;
        case 0x4826d8u: goto label_4826d8;
        case 0x4826dcu: goto label_4826dc;
        case 0x4826e0u: goto label_4826e0;
        case 0x4826e4u: goto label_4826e4;
        case 0x4826e8u: goto label_4826e8;
        case 0x4826ecu: goto label_4826ec;
        case 0x4826f0u: goto label_4826f0;
        case 0x4826f4u: goto label_4826f4;
        case 0x4826f8u: goto label_4826f8;
        case 0x4826fcu: goto label_4826fc;
        case 0x482700u: goto label_482700;
        case 0x482704u: goto label_482704;
        case 0x482708u: goto label_482708;
        case 0x48270cu: goto label_48270c;
        case 0x482710u: goto label_482710;
        case 0x482714u: goto label_482714;
        case 0x482718u: goto label_482718;
        case 0x48271cu: goto label_48271c;
        case 0x482720u: goto label_482720;
        case 0x482724u: goto label_482724;
        case 0x482728u: goto label_482728;
        case 0x48272cu: goto label_48272c;
        case 0x482730u: goto label_482730;
        case 0x482734u: goto label_482734;
        case 0x482738u: goto label_482738;
        case 0x48273cu: goto label_48273c;
        case 0x482740u: goto label_482740;
        case 0x482744u: goto label_482744;
        case 0x482748u: goto label_482748;
        case 0x48274cu: goto label_48274c;
        case 0x482750u: goto label_482750;
        case 0x482754u: goto label_482754;
        case 0x482758u: goto label_482758;
        case 0x48275cu: goto label_48275c;
        case 0x482760u: goto label_482760;
        case 0x482764u: goto label_482764;
        case 0x482768u: goto label_482768;
        case 0x48276cu: goto label_48276c;
        case 0x482770u: goto label_482770;
        case 0x482774u: goto label_482774;
        case 0x482778u: goto label_482778;
        case 0x48277cu: goto label_48277c;
        case 0x482780u: goto label_482780;
        case 0x482784u: goto label_482784;
        case 0x482788u: goto label_482788;
        case 0x48278cu: goto label_48278c;
        case 0x482790u: goto label_482790;
        case 0x482794u: goto label_482794;
        case 0x482798u: goto label_482798;
        case 0x48279cu: goto label_48279c;
        case 0x4827a0u: goto label_4827a0;
        case 0x4827a4u: goto label_4827a4;
        case 0x4827a8u: goto label_4827a8;
        case 0x4827acu: goto label_4827ac;
        case 0x4827b0u: goto label_4827b0;
        case 0x4827b4u: goto label_4827b4;
        default: break;
    }

    ctx->pc = 0x482668u;

label_482668:
    // 0x482668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48266c:
    // 0x48266c: 0x8f838958  lw          $v1, -0x76A8($gp)
    ctx->pc = 0x48266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
label_482670:
    // 0x482670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_482674:
    // 0x482674: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x482674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_482678:
    // 0x482678: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x482678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_48267c:
    // 0x48267c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x48267cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_482680:
    // 0x482680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_482684:
    // 0x482684: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x482684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_482688:
    // 0x482688: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x482688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_48268c:
    // 0x48268c: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x48268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_482690:
    // 0x482690: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x482690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
label_482694:
    // 0x482694: 0x40f809  jalr        $v0
label_482698:
    if (ctx->pc == 0x482698u) {
        ctx->pc = 0x482698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482694u;
        // 0x482698: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48269Cu;
        goto label_48269c;
    }
    ctx->pc = 0x482694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48269Cu);
        ctx->pc = 0x482698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482694u;
        // 0x482698: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482694u, 0x48269Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48269Cu;
label_48269c:
    // 0x48269c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48269cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4826a0:
    // 0x4826a0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_4826a4:
    if (ctx->pc == 0x4826A4u) {
        ctx->pc = 0x4826A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4826A0u;
        // 0x4826a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4826A8u;
        goto label_4826a8;
    }
    ctx->pc = 0x4826A0u;
    {
        const bool branch_taken_0x4826a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4826A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4826A0u;
        // 0x4826a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4826a0) {
            ctx->pc = 0x4826B0u;
            goto label_4826b0;
        }
    }
    ctx->pc = 0x4826A8u;
label_4826a8:
    // 0x4826a8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4826ac:
    if (ctx->pc == 0x4826ACu) {
        ctx->pc = 0x4826ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4826A8u;
        // 0x4826ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4826B0u;
        goto label_4826b0;
    }
    ctx->pc = 0x4826A8u;
    {
        const bool branch_taken_0x4826a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4826ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4826A8u;
        // 0x4826ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4826a8) {
            ctx->pc = 0x4827A0u;
            goto label_4827a0;
        }
    }
    ctx->pc = 0x4826B0u;
label_4826b0:
    // 0x4826b0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x4826b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_4826b4:
    // 0x4826b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x4826b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_4826b8:
    // 0x4826b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x4826b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_4826bc:
    // 0x4826bc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x4826bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_4826c0:
    // 0x4826c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4826c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4826c4:
    // 0x4826c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x4826c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_4826c8:
    // 0x4826c8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x4826c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_4826cc:
    // 0x4826cc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4826ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4826d0:
    // 0x4826d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x4826d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_4826d4:
    // 0x4826d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4826d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4826d8:
    // 0x4826d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4826d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4826dc:
    // 0x4826dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x4826dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_4826e0:
    // 0x4826e0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4826e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4826e4:
    // 0x4826e4: 0x24632eb8  addiu       $v1, $v1, 0x2EB8
    ctx->pc = 0x4826e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11960));
label_4826e8:
    // 0x4826e8: 0xc7838278  lwc1        $f3, -0x7D88($gp)
    ctx->pc = 0x4826e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4826ec:
    // 0x4826ec: 0x24422e60  addiu       $v0, $v0, 0x2E60
    ctx->pc = 0x4826ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
label_4826f0:
    // 0x4826f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x4826f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_4826f4:
    // 0x4826f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4826f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4826f8:
    // 0x4826f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4826f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4826fc:
    // 0x4826fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x4826fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_482700:
    // 0x482700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x482700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_482704:
    // 0x482704: 0xe6040078  swc1        $f4, 0x78($s0)
    ctx->pc = 0x482704u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_482708:
    // 0x482708: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x482708u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_48270c:
    // 0x48270c: 0xe6020084  swc1        $f2, 0x84($s0)
    ctx->pc = 0x48270cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_482710:
    // 0x482710: 0xe604007c  swc1        $f4, 0x7C($s0)
    ctx->pc = 0x482710u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_482714:
    // 0x482714: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x482714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_482718:
    // 0x482718: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x482718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_48271c:
    // 0x48271c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x48271cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_482720:
    // 0x482720: 0xe6010088  swc1        $f1, 0x88($s0)
    ctx->pc = 0x482720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_482724:
    // 0x482724: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x482724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_482728:
    // 0x482728: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x482728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_48272c:
    // 0x48272c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x48272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_482730:
    // 0x482730: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x482730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_482734:
    // 0x482734: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x482734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_482738:
    // 0x482738: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x482738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_48273c:
    // 0x48273c: 0xc782827c  lwc1        $f2, -0x7D84($gp)
    ctx->pc = 0x48273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_482740:
    // 0x482740: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x482740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_482744:
    // 0x482744: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x482744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_482748:
    // 0x482748: 0xc7838280  lwc1        $f3, -0x7D80($gp)
    ctx->pc = 0x482748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48274c:
    // 0x48274c: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x48274cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_482750:
    // 0x482750: 0xc7848284  lwc1        $f4, -0x7D7C($gp)
    ctx->pc = 0x482750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_482754:
    // 0x482754: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x482754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_482758:
    // 0x482758: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x482758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_48275c:
    // 0x48275c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x48275cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_482760:
    // 0x482760: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x482760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_482764:
    // 0x482764: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x482764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_482768:
    // 0x482768: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x482768u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48276c:
    // 0x48276c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48276cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_482770:
    // 0x482770: 0x460330c3  div.s       $f3, $f6, $f3
    ctx->pc = 0x482770u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[6], ctx->f[3]); }
label_482774:
    // 0x482774: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x482774u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_482778:
    // 0x482778: 0xe603008c  swc1        $f3, 0x8C($s0)
    ctx->pc = 0x482778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_48277c:
    // 0x48277c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x48277cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_482780:
    // 0x482780: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x482780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_482784:
    // 0x482784: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x482784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_482788:
    // 0x482788: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x482788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_48278c:
    // 0x48278c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x48278cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_482790:
    // 0x482790: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x482790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
label_482794:
    // 0x482794: 0xc11ff8e  jal         func_47FE38
label_482798:
    if (ctx->pc == 0x482798u) {
        ctx->pc = 0x482798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482794u;
        // 0x482798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48279Cu;
        goto label_48279c;
    }
    ctx->pc = 0x482794u;
    SET_GPR_U32(ctx, 31, 0x48279Cu);
    ctx->pc = 0x482798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482794u;
    // 0x482798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x482794u, 0x48279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48279Cu;
label_48279c:
    // 0x48279c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48279cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4827a0:
    // 0x4827a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4827a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4827a4:
    // 0x4827a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4827a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4827a8:
    // 0x4827a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4827a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4827ac:
    // 0x4827ac: 0x3e00008  jr          $ra
label_4827b0:
    if (ctx->pc == 0x4827B0u) {
        ctx->pc = 0x4827B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4827ACu;
        // 0x4827b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4827B4u;
        goto label_4827b4;
    }
    ctx->pc = 0x4827ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4827B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4827ACu;
        // 0x4827b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4827ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4827B4u;
label_4827b4:
    // 0x4827b4: 0x0  nop
    ctx->pc = 0x4827b4u;
    // NOP
    ctx->pc = 0x4827b8u;
}
