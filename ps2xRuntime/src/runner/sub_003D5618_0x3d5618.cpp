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

// Function: sub_003D5618
// Address: 0x3d5618 - 0x3d5788
void sub_003D5618_0x3d5618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5618_0x3d5618");
#endif

    switch (ctx->pc) {
        case 0x3d5618u: goto label_3d5618;
        case 0x3d561cu: goto label_3d561c;
        case 0x3d5620u: goto label_3d5620;
        case 0x3d5624u: goto label_3d5624;
        case 0x3d5628u: goto label_3d5628;
        case 0x3d562cu: goto label_3d562c;
        case 0x3d5630u: goto label_3d5630;
        case 0x3d5634u: goto label_3d5634;
        case 0x3d5638u: goto label_3d5638;
        case 0x3d563cu: goto label_3d563c;
        case 0x3d5640u: goto label_3d5640;
        case 0x3d5644u: goto label_3d5644;
        case 0x3d5648u: goto label_3d5648;
        case 0x3d564cu: goto label_3d564c;
        case 0x3d5650u: goto label_3d5650;
        case 0x3d5654u: goto label_3d5654;
        case 0x3d5658u: goto label_3d5658;
        case 0x3d565cu: goto label_3d565c;
        case 0x3d5660u: goto label_3d5660;
        case 0x3d5664u: goto label_3d5664;
        case 0x3d5668u: goto label_3d5668;
        case 0x3d566cu: goto label_3d566c;
        case 0x3d5670u: goto label_3d5670;
        case 0x3d5674u: goto label_3d5674;
        case 0x3d5678u: goto label_3d5678;
        case 0x3d567cu: goto label_3d567c;
        case 0x3d5680u: goto label_3d5680;
        case 0x3d5684u: goto label_3d5684;
        case 0x3d5688u: goto label_3d5688;
        case 0x3d568cu: goto label_3d568c;
        case 0x3d5690u: goto label_3d5690;
        case 0x3d5694u: goto label_3d5694;
        case 0x3d5698u: goto label_3d5698;
        case 0x3d569cu: goto label_3d569c;
        case 0x3d56a0u: goto label_3d56a0;
        case 0x3d56a4u: goto label_3d56a4;
        case 0x3d56a8u: goto label_3d56a8;
        case 0x3d56acu: goto label_3d56ac;
        case 0x3d56b0u: goto label_3d56b0;
        case 0x3d56b4u: goto label_3d56b4;
        case 0x3d56b8u: goto label_3d56b8;
        case 0x3d56bcu: goto label_3d56bc;
        case 0x3d56c0u: goto label_3d56c0;
        case 0x3d56c4u: goto label_3d56c4;
        case 0x3d56c8u: goto label_3d56c8;
        case 0x3d56ccu: goto label_3d56cc;
        case 0x3d56d0u: goto label_3d56d0;
        case 0x3d56d4u: goto label_3d56d4;
        case 0x3d56d8u: goto label_3d56d8;
        case 0x3d56dcu: goto label_3d56dc;
        case 0x3d56e0u: goto label_3d56e0;
        case 0x3d56e4u: goto label_3d56e4;
        case 0x3d56e8u: goto label_3d56e8;
        case 0x3d56ecu: goto label_3d56ec;
        case 0x3d56f0u: goto label_3d56f0;
        case 0x3d56f4u: goto label_3d56f4;
        case 0x3d56f8u: goto label_3d56f8;
        case 0x3d56fcu: goto label_3d56fc;
        case 0x3d5700u: goto label_3d5700;
        case 0x3d5704u: goto label_3d5704;
        case 0x3d5708u: goto label_3d5708;
        case 0x3d570cu: goto label_3d570c;
        case 0x3d5710u: goto label_3d5710;
        case 0x3d5714u: goto label_3d5714;
        case 0x3d5718u: goto label_3d5718;
        case 0x3d571cu: goto label_3d571c;
        case 0x3d5720u: goto label_3d5720;
        case 0x3d5724u: goto label_3d5724;
        case 0x3d5728u: goto label_3d5728;
        case 0x3d572cu: goto label_3d572c;
        case 0x3d5730u: goto label_3d5730;
        case 0x3d5734u: goto label_3d5734;
        case 0x3d5738u: goto label_3d5738;
        case 0x3d573cu: goto label_3d573c;
        case 0x3d5740u: goto label_3d5740;
        case 0x3d5744u: goto label_3d5744;
        case 0x3d5748u: goto label_3d5748;
        case 0x3d574cu: goto label_3d574c;
        case 0x3d5750u: goto label_3d5750;
        case 0x3d5754u: goto label_3d5754;
        case 0x3d5758u: goto label_3d5758;
        case 0x3d575cu: goto label_3d575c;
        case 0x3d5760u: goto label_3d5760;
        case 0x3d5764u: goto label_3d5764;
        case 0x3d5768u: goto label_3d5768;
        case 0x3d576cu: goto label_3d576c;
        case 0x3d5770u: goto label_3d5770;
        case 0x3d5774u: goto label_3d5774;
        case 0x3d5778u: goto label_3d5778;
        case 0x3d577cu: goto label_3d577c;
        case 0x3d5780u: goto label_3d5780;
        case 0x3d5784u: goto label_3d5784;
        default: break;
    }

    ctx->pc = 0x3d5618u;

label_3d5618:
    // 0x3d5618: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d5618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3d561c:
    // 0x3d561c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3d561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3d5620:
    // 0x3d5620: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3d5620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3d5624:
    // 0x3d5624: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3d5624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3d5628:
    // 0x3d5628: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d5628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d562c:
    // 0x3d562c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3d562cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3d5630:
    // 0x3d5630: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3d5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3d5634:
    // 0x3d5634: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d5634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d5638:
    // 0x3d5638: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3d5638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3d563c:
    // 0x3d563c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3d563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3d5640:
    // 0x3d5640: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3d5640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5644:
    // 0x3d5644: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3d5644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3d5648:
    // 0x3d5648: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x3d5648u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
label_3d564c:
    // 0x3d564c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d5650:
    // 0x3d5650: 0x36f7ff00  ori         $s7, $s7, 0xFF00
    ctx->pc = 0x3d5650u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65280);
label_3d5654:
    // 0x3d5654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d5654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d5658:
    // 0x3d5658: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d5658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d565c:
    // 0x3d565c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3d565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3d5660:
    // 0x3d5660: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d5660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5664:
    // 0x3d5664: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d5668:
    // 0x3d5668: 0x40f809  jalr        $v0
label_3d566c:
    if (ctx->pc == 0x3D566Cu) {
        ctx->pc = 0x3D566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5668u;
        // 0x3d566c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5670u;
        goto label_3d5670;
    }
    ctx->pc = 0x3D5668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5670u);
        ctx->pc = 0x3D566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5668u;
        // 0x3d566c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5668u, 0x3D5670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5670u;
label_3d5670:
    // 0x3d5670: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d5674:
    // 0x3d5674: 0xe6d400bc  swc1        $f20, 0xBC($s6)
    ctx->pc = 0x3d5674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 188), bits); }
label_3d5678:
    // 0x3d5678: 0xaec30054  sw          $v1, 0x54($s6)
    ctx->pc = 0x3d5678u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 3));
label_3d567c:
    // 0x3d567c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d567cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5680:
    // 0x3d5680: 0xc0ea146  jal         func_3A8518
label_3d5684:
    if (ctx->pc == 0x3D5684u) {
        ctx->pc = 0x3D5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5680u;
        // 0x3d5684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5688u;
        goto label_3d5688;
    }
    ctx->pc = 0x3D5680u;
    SET_GPR_U32(ctx, 31, 0x3D5688u);
    ctx->pc = 0x3D5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5680u;
    // 0x3d5684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D5680u, 0x3D5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5688u;
label_3d5688:
    // 0x3d5688: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d5688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d568c:
    // 0x3d568c: 0xc0ea146  jal         func_3A8518
label_3d5690:
    if (ctx->pc == 0x3D5690u) {
        ctx->pc = 0x3D5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D568Cu;
        // 0x3d5690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5694u;
        goto label_3d5694;
    }
    ctx->pc = 0x3D568Cu;
    SET_GPR_U32(ctx, 31, 0x3D5694u);
    ctx->pc = 0x3D5690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D568Cu;
    // 0x3d5690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D568Cu, 0x3D5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5694u;
label_3d5694:
    // 0x3d5694: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d5694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5698:
    // 0x3d5698: 0xc0ea146  jal         func_3A8518
label_3d569c:
    if (ctx->pc == 0x3D569Cu) {
        ctx->pc = 0x3D569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5698u;
        // 0x3d569c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D56A0u;
        goto label_3d56a0;
    }
    ctx->pc = 0x3D5698u;
    SET_GPR_U32(ctx, 31, 0x3D56A0u);
    ctx->pc = 0x3D569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5698u;
    // 0x3d569c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D5698u, 0x3D56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D56A0u;
label_3d56a0:
    // 0x3d56a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d56a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d56a4:
    // 0x3d56a4: 0xc0ea146  jal         func_3A8518
label_3d56a8:
    if (ctx->pc == 0x3D56A8u) {
        ctx->pc = 0x3D56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56A4u;
        // 0x3d56a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D56ACu;
        goto label_3d56ac;
    }
    ctx->pc = 0x3D56A4u;
    SET_GPR_U32(ctx, 31, 0x3D56ACu);
    ctx->pc = 0x3D56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D56A4u;
    // 0x3d56a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D56A4u, 0x3D56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D56ACu;
label_3d56ac:
    // 0x3d56ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d56acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d56b0:
    // 0x3d56b0: 0xc0ea14c  jal         func_3A8530
label_3d56b4:
    if (ctx->pc == 0x3D56B4u) {
        ctx->pc = 0x3D56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56B0u;
        // 0x3d56b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D56B8u;
        goto label_3d56b8;
    }
    ctx->pc = 0x3D56B0u;
    SET_GPR_U32(ctx, 31, 0x3D56B8u);
    ctx->pc = 0x3D56B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D56B0u;
    // 0x3d56b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D56B0u, 0x3D56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D56B8u;
label_3d56b8:
    // 0x3d56b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d56b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d56bc:
    // 0x3d56bc: 0xc0ea12a  jal         func_3A84A8
label_3d56c0:
    if (ctx->pc == 0x3D56C0u) {
        ctx->pc = 0x3D56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56BCu;
        // 0x3d56c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D56C4u;
        goto label_3d56c4;
    }
    ctx->pc = 0x3D56BCu;
    SET_GPR_U32(ctx, 31, 0x3D56C4u);
    ctx->pc = 0x3D56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D56BCu;
    // 0x3d56c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D56BCu, 0x3D56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D56C4u;
label_3d56c4:
    // 0x3d56c4: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x3d56c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
label_3d56c8:
    // 0x3d56c8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3d56c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3d56cc:
    // 0x3d56cc: 0xaed000b4  sw          $s0, 0xB4($s6)
    ctx->pc = 0x3d56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 16));
label_3d56d0:
    // 0x3d56d0: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x3d56d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_3d56d4:
    // 0x3d56d4: 0xaed000b0  sw          $s0, 0xB0($s6)
    ctx->pc = 0x3d56d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 16));
label_3d56d8:
    // 0x3d56d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d56d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d56dc:
    // 0x3d56dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d56dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d56e0:
    // 0x3d56e0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d56e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d56e4:
    // 0x3d56e4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3d56e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3d56e8:
    // 0x3d56e8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3d56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3d56ec:
    // 0x3d56ec: 0x7ec20030  sq          $v0, 0x30($s6)
    ctx->pc = 0x3d56ecu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), GPR_VEC(ctx, 2));
label_3d56f0:
    // 0x3d56f0: 0xc0e858c  jal         func_3A1630
label_3d56f4:
    if (ctx->pc == 0x3D56F4u) {
        ctx->pc = 0x3D56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56F0u;
        // 0x3d56f4: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D56F8u;
        goto label_3d56f8;
    }
    ctx->pc = 0x3D56F0u;
    SET_GPR_U32(ctx, 31, 0x3D56F8u);
    ctx->pc = 0x3D56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D56F0u;
    // 0x3d56f4: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D56F0u, 0x3D56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D56F8u;
label_3d56f8:
    // 0x3d56f8: 0xaed500c4  sw          $s5, 0xC4($s6)
    ctx->pc = 0x3d56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 21));
label_3d56fc:
    // 0x3d56fc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x3d56fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_3d5700:
    // 0x3d5700: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d5700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d5704:
    // 0x3d5704: 0xc0e9404  jal         func_3A5010
label_3d5708:
    if (ctx->pc == 0x3D5708u) {
        ctx->pc = 0x3D5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5704u;
        // 0x3d5708: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D570Cu;
        goto label_3d570c;
    }
    ctx->pc = 0x3D5704u;
    SET_GPR_U32(ctx, 31, 0x3D570Cu);
    ctx->pc = 0x3D5708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5704u;
    // 0x3d5708: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D5704u, 0x3D570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D570Cu;
label_3d570c:
    // 0x3d570c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d570cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d5710:
    // 0x3d5710: 0x7ec30010  sq          $v1, 0x10($s6)
    ctx->pc = 0x3d5710u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 3));
label_3d5714:
    // 0x3d5714: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x3d5714u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_3d5718:
    // 0x3d5718: 0x7ac20010  lq          $v0, 0x10($s6)
    ctx->pc = 0x3d5718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_3d571c:
    // 0x3d571c: 0x7ec20030  sq          $v0, 0x30($s6)
    ctx->pc = 0x3d571cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), GPR_VEC(ctx, 2));
label_3d5720:
    // 0x3d5720: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
label_3d5724:
    if (ctx->pc == 0x3D5724u) {
        ctx->pc = 0x3D5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5720u;
        // 0x3d5724: 0xae540014  sw          $s4, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5728u;
        goto label_3d5728;
    }
    ctx->pc = 0x3D5720u;
    {
        const bool branch_taken_0x3d5720 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5720u;
        // 0x3d5724: 0xae540014  sw          $s4, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5720) {
            ctx->pc = 0x3D5748u;
            goto label_3d5748;
        }
    }
    ctx->pc = 0x3D5728u;
label_3d5728:
    // 0x3d5728: 0x8ec200b0  lw          $v0, 0xB0($s6)
    ctx->pc = 0x3d5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_3d572c:
    // 0x3d572c: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x3d572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_3d5730:
    // 0x3d5730: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x3d5730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_3d5734:
    // 0x3d5734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5738:
    // 0x3d5738: 0x3442006f  ori         $v0, $v0, 0x6F
    ctx->pc = 0x3d5738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
label_3d573c:
    // 0x3d573c: 0xaec200b4  sw          $v0, 0xB4($s6)
    ctx->pc = 0x3d573cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 2));
label_3d5740:
    // 0x3d5740: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d5744:
    if (ctx->pc == 0x3D5744u) {
        ctx->pc = 0x3D5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5740u;
        // 0x3d5744: 0xe6c000c0  swc1        $f0, 0xC0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5748u;
        goto label_3d5748;
    }
    ctx->pc = 0x3D5740u;
    {
        const bool branch_taken_0x3d5740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5740u;
        // 0x3d5744: 0xe6c000c0  swc1        $f0, 0xC0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5740) {
            ctx->pc = 0x3D5758u;
            goto label_3d5758;
        }
    }
    ctx->pc = 0x3D5748u;
label_3d5748:
    // 0x3d5748: 0x8ec200b0  lw          $v0, 0xB0($s6)
    ctx->pc = 0x3d5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_3d574c:
    // 0x3d574c: 0xe6d400c0  swc1        $f20, 0xC0($s6)
    ctx->pc = 0x3d574cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 192), bits); }
label_3d5750:
    // 0x3d5750: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x3d5750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_3d5754:
    // 0x3d5754: 0xaec200b4  sw          $v0, 0xB4($s6)
    ctx->pc = 0x3d5754u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 2));
label_3d5758:
    // 0x3d5758: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3d5758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d575c:
    // 0x3d575c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3d575cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d5760:
    // 0x3d5760: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3d5760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d5764:
    // 0x3d5764: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3d5764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5768:
    // 0x3d5768: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3d5768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d576c:
    // 0x3d576c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d576cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d5770:
    // 0x3d5770: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3d5770u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5774:
    // 0x3d5774: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3d5774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d5778:
    // 0x3d5778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d5778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d577c:
    // 0x3d577c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3d577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d5780:
    // 0x3d5780: 0x3e00008  jr          $ra
label_3d5784:
    if (ctx->pc == 0x3D5784u) {
        ctx->pc = 0x3D5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5780u;
        // 0x3d5784: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5788u;
        goto label_fallthrough_0x3d5780;
    }
    ctx->pc = 0x3D5780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5780u;
        // 0x3d5784: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d5780:
    ctx->pc = 0x3D5788u;
}
