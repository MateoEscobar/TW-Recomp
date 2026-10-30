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

// Function: sub_002D5668
// Address: 0x2d5668 - 0x2d5798
void sub_002D5668_0x2d5668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5668_0x2d5668");
#endif

    switch (ctx->pc) {
        case 0x2d5668u: goto label_2d5668;
        case 0x2d566cu: goto label_2d566c;
        case 0x2d5670u: goto label_2d5670;
        case 0x2d5674u: goto label_2d5674;
        case 0x2d5678u: goto label_2d5678;
        case 0x2d567cu: goto label_2d567c;
        case 0x2d5680u: goto label_2d5680;
        case 0x2d5684u: goto label_2d5684;
        case 0x2d5688u: goto label_2d5688;
        case 0x2d568cu: goto label_2d568c;
        case 0x2d5690u: goto label_2d5690;
        case 0x2d5694u: goto label_2d5694;
        case 0x2d5698u: goto label_2d5698;
        case 0x2d569cu: goto label_2d569c;
        case 0x2d56a0u: goto label_2d56a0;
        case 0x2d56a4u: goto label_2d56a4;
        case 0x2d56a8u: goto label_2d56a8;
        case 0x2d56acu: goto label_2d56ac;
        case 0x2d56b0u: goto label_2d56b0;
        case 0x2d56b4u: goto label_2d56b4;
        case 0x2d56b8u: goto label_2d56b8;
        case 0x2d56bcu: goto label_2d56bc;
        case 0x2d56c0u: goto label_2d56c0;
        case 0x2d56c4u: goto label_2d56c4;
        case 0x2d56c8u: goto label_2d56c8;
        case 0x2d56ccu: goto label_2d56cc;
        case 0x2d56d0u: goto label_2d56d0;
        case 0x2d56d4u: goto label_2d56d4;
        case 0x2d56d8u: goto label_2d56d8;
        case 0x2d56dcu: goto label_2d56dc;
        case 0x2d56e0u: goto label_2d56e0;
        case 0x2d56e4u: goto label_2d56e4;
        case 0x2d56e8u: goto label_2d56e8;
        case 0x2d56ecu: goto label_2d56ec;
        case 0x2d56f0u: goto label_2d56f0;
        case 0x2d56f4u: goto label_2d56f4;
        case 0x2d56f8u: goto label_2d56f8;
        case 0x2d56fcu: goto label_2d56fc;
        case 0x2d5700u: goto label_2d5700;
        case 0x2d5704u: goto label_2d5704;
        case 0x2d5708u: goto label_2d5708;
        case 0x2d570cu: goto label_2d570c;
        case 0x2d5710u: goto label_2d5710;
        case 0x2d5714u: goto label_2d5714;
        case 0x2d5718u: goto label_2d5718;
        case 0x2d571cu: goto label_2d571c;
        case 0x2d5720u: goto label_2d5720;
        case 0x2d5724u: goto label_2d5724;
        case 0x2d5728u: goto label_2d5728;
        case 0x2d572cu: goto label_2d572c;
        case 0x2d5730u: goto label_2d5730;
        case 0x2d5734u: goto label_2d5734;
        case 0x2d5738u: goto label_2d5738;
        case 0x2d573cu: goto label_2d573c;
        case 0x2d5740u: goto label_2d5740;
        case 0x2d5744u: goto label_2d5744;
        case 0x2d5748u: goto label_2d5748;
        case 0x2d574cu: goto label_2d574c;
        case 0x2d5750u: goto label_2d5750;
        case 0x2d5754u: goto label_2d5754;
        case 0x2d5758u: goto label_2d5758;
        case 0x2d575cu: goto label_2d575c;
        case 0x2d5760u: goto label_2d5760;
        case 0x2d5764u: goto label_2d5764;
        case 0x2d5768u: goto label_2d5768;
        case 0x2d576cu: goto label_2d576c;
        case 0x2d5770u: goto label_2d5770;
        case 0x2d5774u: goto label_2d5774;
        case 0x2d5778u: goto label_2d5778;
        case 0x2d577cu: goto label_2d577c;
        case 0x2d5780u: goto label_2d5780;
        case 0x2d5784u: goto label_2d5784;
        case 0x2d5788u: goto label_2d5788;
        case 0x2d578cu: goto label_2d578c;
        case 0x2d5790u: goto label_2d5790;
        case 0x2d5794u: goto label_2d5794;
        default: break;
    }

    ctx->pc = 0x2d5668u;

label_2d5668:
    // 0x2d5668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d5668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d566c:
    // 0x2d566c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2d5670:
    // 0x2d5670: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d5670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2d5674:
    // 0x2d5674: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d5674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5678:
    // 0x2d5678: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d5678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2d567c:
    // 0x2d567c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d567cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5680:
    // 0x2d5680: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d5680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2d5684:
    // 0x2d5684: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d5688:
    // 0x2d5688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d568c:
    // 0x2d568c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d5690:
    // 0x2d5690: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d5690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5694:
    // 0x2d5694: 0x820303b8  lb          $v1, 0x3B8($s0)
    ctx->pc = 0x2d5694u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 952)));
label_2d5698:
    // 0x2d5698: 0x10720036  beq         $v1, $s2, . + 4 + (0x36 << 2)
label_2d569c:
    if (ctx->pc == 0x2D569Cu) {
        ctx->pc = 0x2D569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5698u;
        // 0x2d569c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D56A0u;
        goto label_2d56a0;
    }
    ctx->pc = 0x2D5698u;
    {
        const bool branch_taken_0x2d5698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5698u;
        // 0x2d569c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5698) {
            ctx->pc = 0x2D5774u;
            goto label_2d5774;
        }
    }
    ctx->pc = 0x2D56A0u;
label_2d56a0:
    // 0x2d56a0: 0xc089018  jal         func_224060
label_2d56a4:
    if (ctx->pc == 0x2D56A4u) {
        ctx->pc = 0x2D56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56A0u;
        // 0x2d56a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D56A8u;
        goto label_2d56a8;
    }
    ctx->pc = 0x2D56A0u;
    SET_GPR_U32(ctx, 31, 0x2D56A8u);
    ctx->pc = 0x2D56A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D56A0u;
    // 0x2d56a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2D56A0u, 0x2D56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56A8u;
label_2d56a8:
    // 0x2d56a8: 0x10520031  beq         $v0, $s2, . + 4 + (0x31 << 2)
label_2d56ac:
    if (ctx->pc == 0x2D56ACu) {
        ctx->pc = 0x2D56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56A8u;
        // 0x2d56ac: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D56B0u;
        goto label_2d56b0;
    }
    ctx->pc = 0x2D56A8u;
    {
        const bool branch_taken_0x2d56a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56A8u;
        // 0x2d56ac: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56a8) {
            ctx->pc = 0x2D5770u;
            goto label_2d5770;
        }
    }
    ctx->pc = 0x2D56B0u;
label_2d56b0:
    // 0x2d56b0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2d56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2d56b4:
    // 0x2d56b4: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2d56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2d56b8:
    // 0x2d56b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2d56bc:
    // 0x2d56bc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2d56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2d56c0:
    // 0x2d56c0: 0x2473f2f0  addiu       $s3, $v1, -0xD10
    ctx->pc = 0x2d56c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_2d56c4:
    // 0x2d56c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d56c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2d56c8:
    // 0x2d56c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d56c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d56cc:
    // 0x2d56cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d56d0:
    // 0x2d56d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d56d4:
    // 0x2d56d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d56d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d56d8:
    // 0x2d56d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d56d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d56dc:
    // 0x2d56dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d56dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d56e0:
    // 0x2d56e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d56e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d56e4:
    // 0x2d56e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d56e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d56e8:
    // 0x2d56e8: 0xc0a757c  jal         func_29D5F0
label_2d56ec:
    if (ctx->pc == 0x2D56ECu) {
        ctx->pc = 0x2D56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56E8u;
        // 0x2d56ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D56F0u;
        goto label_2d56f0;
    }
    ctx->pc = 0x2D56E8u;
    SET_GPR_U32(ctx, 31, 0x2D56F0u);
    ctx->pc = 0x2D56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D56E8u;
    // 0x2d56ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2D56E8u, 0x2D56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56F0u;
label_2d56f0:
    // 0x2d56f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d56f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d56f4:
    // 0x2d56f4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d56f8:
    if (ctx->pc == 0x2D56F8u) {
        ctx->pc = 0x2D56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56F4u;
        // 0x2d56f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D56FCu;
        goto label_2d56fc;
    }
    ctx->pc = 0x2D56F4u;
    {
        const bool branch_taken_0x2d56f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56F4u;
        // 0x2d56f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56f4) {
            ctx->pc = 0x2D576Cu;
            goto label_2d576c;
        }
    }
    ctx->pc = 0x2D56FCu;
label_2d56fc:
    // 0x2d56fc: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2d56fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2d5700:
    // 0x2d5700: 0xc0e44cc  jal         func_391330
label_2d5704:
    if (ctx->pc == 0x2D5704u) {
        ctx->pc = 0x2D5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5700u;
        // 0x2d5704: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5708u;
        goto label_2d5708;
    }
    ctx->pc = 0x2D5700u;
    SET_GPR_U32(ctx, 31, 0x2D5708u);
    ctx->pc = 0x2D5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5700u;
    // 0x2d5704: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2D5700u, 0x2D5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5708u;
label_2d5708:
    // 0x2d5708: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x2d5708u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_2d570c:
    // 0x2d570c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d5710:
    // 0x2d5710: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_2d5714:
    if (ctx->pc == 0x2D5714u) {
        ctx->pc = 0x2D5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5710u;
        // 0x2d5714: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5718u;
        goto label_2d5718;
    }
    ctx->pc = 0x2D5710u;
    {
        const bool branch_taken_0x2d5710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d5710) {
            ctx->pc = 0x2D5714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5710u;
            // 0x2d5714: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5770u;
            goto label_2d5770;
        }
    }
    ctx->pc = 0x2D5718u;
label_2d5718:
    // 0x2d5718: 0xa292001c  sb          $s2, 0x1C($s4)
    ctx->pc = 0x2d5718u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 18));
label_2d571c:
    // 0x2d571c: 0xc095fce  jal         func_257F38
label_2d5720:
    if (ctx->pc == 0x2D5720u) {
        ctx->pc = 0x2D5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D571Cu;
        // 0x2d5720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5724u;
        goto label_2d5724;
    }
    ctx->pc = 0x2D571Cu;
    SET_GPR_U32(ctx, 31, 0x2D5724u);
    ctx->pc = 0x2D5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D571Cu;
    // 0x2d5720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D571Cu, 0x2D5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5724u;
label_2d5724:
    // 0x2d5724: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d5728:
    // 0x2d5728: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d5728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d572c:
    // 0x2d572c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d5730:
    // 0x2d5730: 0x40f809  jalr        $v0
label_2d5734:
    if (ctx->pc == 0x2D5734u) {
        ctx->pc = 0x2D5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5730u;
        // 0x2d5734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5738u;
        goto label_2d5738;
    }
    ctx->pc = 0x2D5730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5738u);
        ctx->pc = 0x2D5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5730u;
        // 0x2d5734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5730u, 0x2D5738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5738u;
label_2d5738:
    // 0x2d5738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d5738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d573c:
    // 0x2d573c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d573cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5740:
    // 0x2d5740: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d5740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d5744:
    // 0x2d5744: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d5748:
    // 0x2d5748: 0x40f809  jalr        $v0
label_2d574c:
    if (ctx->pc == 0x2D574Cu) {
        ctx->pc = 0x2D574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5748u;
        // 0x2d574c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5750u;
        goto label_2d5750;
    }
    ctx->pc = 0x2D5748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5750u);
        ctx->pc = 0x2D574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5748u;
        // 0x2d574c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5748u, 0x2D5750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5750u;
label_2d5750:
    // 0x2d5750: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d5750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5754:
    // 0x2d5754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5758:
    // 0x2d5758: 0xc0b71c2  jal         func_2DC708
label_2d575c:
    if (ctx->pc == 0x2D575Cu) {
        ctx->pc = 0x2D575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5758u;
        // 0x2d575c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5760u;
        goto label_2d5760;
    }
    ctx->pc = 0x2D5758u;
    SET_GPR_U32(ctx, 31, 0x2D5760u);
    ctx->pc = 0x2D575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5758u;
    // 0x2d575c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2D5758u, 0x2D5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5760u;
label_2d5760:
    // 0x2d5760: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2d5760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_2d5764:
    // 0x2d5764: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d5768:
    if (ctx->pc == 0x2D5768u) {
        ctx->pc = 0x2D5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5764u;
        // 0x2d5768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D576Cu;
        goto label_2d576c;
    }
    ctx->pc = 0x2D5764u;
    {
        const bool branch_taken_0x2d5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5764u;
        // 0x2d5768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5764) {
            ctx->pc = 0x2D5774u;
            goto label_2d5774;
        }
    }
    ctx->pc = 0x2D576Cu;
label_2d576c:
    // 0x2d576c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2d576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_2d5770:
    // 0x2d5770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5774:
    // 0x2d5774: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d5774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d5778:
    // 0x2d5778: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d5778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d577c:
    // 0x2d577c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d577cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d5780:
    // 0x2d5780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d5784:
    // 0x2d5784: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d5784u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5788:
    // 0x2d5788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d578c:
    // 0x2d578c: 0x3e00008  jr          $ra
label_2d5790:
    if (ctx->pc == 0x2D5790u) {
        ctx->pc = 0x2D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D578Cu;
        // 0x2d5790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5794u;
        goto label_2d5794;
    }
    ctx->pc = 0x2D578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D578Cu;
        // 0x2d5790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5794u;
label_2d5794:
    // 0x2d5794: 0x0  nop
    ctx->pc = 0x2d5794u;
    // NOP
    ctx->pc = 0x2d5798u;
}
