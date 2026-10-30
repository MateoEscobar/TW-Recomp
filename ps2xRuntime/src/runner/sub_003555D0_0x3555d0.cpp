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

// Function: sub_003555D0
// Address: 0x3555d0 - 0x355798
void sub_003555D0_0x3555d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003555D0_0x3555d0");
#endif

    switch (ctx->pc) {
        case 0x3555d0u: goto label_3555d0;
        case 0x3555d4u: goto label_3555d4;
        case 0x3555d8u: goto label_3555d8;
        case 0x3555dcu: goto label_3555dc;
        case 0x3555e0u: goto label_3555e0;
        case 0x3555e4u: goto label_3555e4;
        case 0x3555e8u: goto label_3555e8;
        case 0x3555ecu: goto label_3555ec;
        case 0x3555f0u: goto label_3555f0;
        case 0x3555f4u: goto label_3555f4;
        case 0x3555f8u: goto label_3555f8;
        case 0x3555fcu: goto label_3555fc;
        case 0x355600u: goto label_355600;
        case 0x355604u: goto label_355604;
        case 0x355608u: goto label_355608;
        case 0x35560cu: goto label_35560c;
        case 0x355610u: goto label_355610;
        case 0x355614u: goto label_355614;
        case 0x355618u: goto label_355618;
        case 0x35561cu: goto label_35561c;
        case 0x355620u: goto label_355620;
        case 0x355624u: goto label_355624;
        case 0x355628u: goto label_355628;
        case 0x35562cu: goto label_35562c;
        case 0x355630u: goto label_355630;
        case 0x355634u: goto label_355634;
        case 0x355638u: goto label_355638;
        case 0x35563cu: goto label_35563c;
        case 0x355640u: goto label_355640;
        case 0x355644u: goto label_355644;
        case 0x355648u: goto label_355648;
        case 0x35564cu: goto label_35564c;
        case 0x355650u: goto label_355650;
        case 0x355654u: goto label_355654;
        case 0x355658u: goto label_355658;
        case 0x35565cu: goto label_35565c;
        case 0x355660u: goto label_355660;
        case 0x355664u: goto label_355664;
        case 0x355668u: goto label_355668;
        case 0x35566cu: goto label_35566c;
        case 0x355670u: goto label_355670;
        case 0x355674u: goto label_355674;
        case 0x355678u: goto label_355678;
        case 0x35567cu: goto label_35567c;
        case 0x355680u: goto label_355680;
        case 0x355684u: goto label_355684;
        case 0x355688u: goto label_355688;
        case 0x35568cu: goto label_35568c;
        case 0x355690u: goto label_355690;
        case 0x355694u: goto label_355694;
        case 0x355698u: goto label_355698;
        case 0x35569cu: goto label_35569c;
        case 0x3556a0u: goto label_3556a0;
        case 0x3556a4u: goto label_3556a4;
        case 0x3556a8u: goto label_3556a8;
        case 0x3556acu: goto label_3556ac;
        case 0x3556b0u: goto label_3556b0;
        case 0x3556b4u: goto label_3556b4;
        case 0x3556b8u: goto label_3556b8;
        case 0x3556bcu: goto label_3556bc;
        case 0x3556c0u: goto label_3556c0;
        case 0x3556c4u: goto label_3556c4;
        case 0x3556c8u: goto label_3556c8;
        case 0x3556ccu: goto label_3556cc;
        case 0x3556d0u: goto label_3556d0;
        case 0x3556d4u: goto label_3556d4;
        case 0x3556d8u: goto label_3556d8;
        case 0x3556dcu: goto label_3556dc;
        case 0x3556e0u: goto label_3556e0;
        case 0x3556e4u: goto label_3556e4;
        case 0x3556e8u: goto label_3556e8;
        case 0x3556ecu: goto label_3556ec;
        case 0x3556f0u: goto label_3556f0;
        case 0x3556f4u: goto label_3556f4;
        case 0x3556f8u: goto label_3556f8;
        case 0x3556fcu: goto label_3556fc;
        case 0x355700u: goto label_355700;
        case 0x355704u: goto label_355704;
        case 0x355708u: goto label_355708;
        case 0x35570cu: goto label_35570c;
        case 0x355710u: goto label_355710;
        case 0x355714u: goto label_355714;
        case 0x355718u: goto label_355718;
        case 0x35571cu: goto label_35571c;
        case 0x355720u: goto label_355720;
        case 0x355724u: goto label_355724;
        case 0x355728u: goto label_355728;
        case 0x35572cu: goto label_35572c;
        case 0x355730u: goto label_355730;
        case 0x355734u: goto label_355734;
        case 0x355738u: goto label_355738;
        case 0x35573cu: goto label_35573c;
        case 0x355740u: goto label_355740;
        case 0x355744u: goto label_355744;
        case 0x355748u: goto label_355748;
        case 0x35574cu: goto label_35574c;
        case 0x355750u: goto label_355750;
        case 0x355754u: goto label_355754;
        case 0x355758u: goto label_355758;
        case 0x35575cu: goto label_35575c;
        case 0x355760u: goto label_355760;
        case 0x355764u: goto label_355764;
        case 0x355768u: goto label_355768;
        case 0x35576cu: goto label_35576c;
        case 0x355770u: goto label_355770;
        case 0x355774u: goto label_355774;
        case 0x355778u: goto label_355778;
        case 0x35577cu: goto label_35577c;
        case 0x355780u: goto label_355780;
        case 0x355784u: goto label_355784;
        case 0x355788u: goto label_355788;
        case 0x35578cu: goto label_35578c;
        case 0x355790u: goto label_355790;
        case 0x355794u: goto label_355794;
        default: break;
    }

    ctx->pc = 0x3555d0u;

label_3555d0:
    // 0x3555d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3555d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3555d4:
    // 0x3555d4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3555d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3555d8:
    // 0x3555d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3555d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3555dc:
    // 0x3555dc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3555dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3555e0:
    // 0x3555e0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3555e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3555e4:
    // 0x3555e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3555e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3555e8:
    // 0x3555e8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3555e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3555ec:
    // 0x3555ec: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3555f0:
    // 0x3555f0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3555f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3555f4:
    // 0x3555f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3555f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3555f8:
    // 0x3555f8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3555f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3555fc:
    // 0x3555fc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3555fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_355600:
    // 0x355600: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x355600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_355604:
    // 0x355604: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x355604u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_355608:
    // 0x355608: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x355608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_35560c:
    // 0x35560c: 0x24a58da0  addiu       $a1, $a1, -0x7260
    ctx->pc = 0x35560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938016));
label_355610:
    // 0x355610: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x355610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_355614:
    // 0x355614: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x355614u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_355618:
    // 0x355618: 0xc10c313  jal         func_430C4C
label_35561c:
    if (ctx->pc == 0x35561Cu) {
        ctx->pc = 0x35561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355618u;
        // 0x35561c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x355620u;
        goto label_355620;
    }
    ctx->pc = 0x355618u;
    SET_GPR_U32(ctx, 31, 0x355620u);
    ctx->pc = 0x35561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355618u;
    // 0x35561c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x355618u, 0x355620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355620u;
label_355620:
    // 0x355620: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_355624:
    if (ctx->pc == 0x355624u) {
        ctx->pc = 0x355624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355620u;
        // 0x355624: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355628u;
        goto label_355628;
    }
    ctx->pc = 0x355620u;
    {
        const bool branch_taken_0x355620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355620u;
        // 0x355624: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355620) {
            ctx->pc = 0x3556FCu;
            goto label_3556fc;
        }
    }
    ctx->pc = 0x355628u;
label_355628:
    // 0x355628: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x355628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_35562c:
    // 0x35562c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x35562cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_355630:
    // 0x355630: 0xc047e6c  jal         func_11F9B0
label_355634:
    if (ctx->pc == 0x355634u) {
        ctx->pc = 0x355634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355630u;
        // 0x355634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355638u;
        goto label_355638;
    }
    ctx->pc = 0x355630u;
    SET_GPR_U32(ctx, 31, 0x355638u);
    ctx->pc = 0x355634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355630u;
    // 0x355634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x355630u, 0x355638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355638u;
label_355638:
    // 0x355638: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x355638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35563c:
    // 0x35563c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35563cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355640:
    // 0x355640: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x355640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_355644:
    // 0x355644: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_355648:
    // 0x355648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x355648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35564c:
    // 0x35564c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x35564cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_355650:
    // 0x355650: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x355650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_355654:
    // 0x355654: 0x60f809  jalr        $v1
label_355658:
    if (ctx->pc == 0x355658u) {
        ctx->pc = 0x355658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355654u;
        // 0x355658: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35565Cu;
        goto label_35565c;
    }
    ctx->pc = 0x355654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35565Cu);
        ctx->pc = 0x355658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355654u;
        // 0x355658: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355654u, 0x35565Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35565Cu;
label_35565c:
    // 0x35565c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x35565cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355660:
    // 0x355660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355664:
    // 0x355664: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x355664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_355668:
    // 0x355668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x355668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35566c:
    // 0x35566c: 0x0  nop
    ctx->pc = 0x35566cu;
    // NOP
label_355670:
    // 0x355670: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x355670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_355674:
    // 0x355674: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x355674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_355678:
    // 0x355678: 0x40f809  jalr        $v0
label_35567c:
    if (ctx->pc == 0x35567Cu) {
        ctx->pc = 0x35567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355678u;
        // 0x35567c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355680u;
        goto label_355680;
    }
    ctx->pc = 0x355678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x355680u);
        ctx->pc = 0x35567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355678u;
        // 0x35567c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355678u, 0x355680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x355680u;
label_355680:
    // 0x355680: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x355680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_355684:
    // 0x355684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x355684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_355688:
    // 0x355688: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x355688u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35568c:
    // 0x35568c: 0x84e40170  lh          $a0, 0x170($a3)
    ctx->pc = 0x35568cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 368)));
label_355690:
    // 0x355690: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x355690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_355694:
    // 0x355694: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x355694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_355698:
    // 0x355698: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x355698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_35569c:
    // 0x35569c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x35569cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3556a0:
    // 0x3556a0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3556a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3556a4:
    // 0x3556a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3556a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3556a8:
    // 0x3556a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3556a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3556ac:
    // 0x3556ac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3556acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3556b0:
    // 0x3556b0: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x3556b0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_3556b4:
    // 0x3556b4: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x3556b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3556b8:
    // 0x3556b8: 0x40f809  jalr        $v0
label_3556bc:
    if (ctx->pc == 0x3556BCu) {
        ctx->pc = 0x3556C0u;
        goto label_3556c0;
    }
    ctx->pc = 0x3556B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3556C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3556B8u, 0x3556C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3556C0u;
label_3556c0:
    // 0x3556c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3556c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3556c4:
    // 0x3556c4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3556c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3556c8:
    // 0x3556c8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x3556c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3556cc:
    // 0x3556cc: 0x0  nop
    ctx->pc = 0x3556ccu;
    // NOP
label_3556d0:
    // 0x3556d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3556d4:
    if (ctx->pc == 0x3556D4u) {
        ctx->pc = 0x3556D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556D0u;
        // 0x3556d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3556D8u;
        goto label_3556d8;
    }
    ctx->pc = 0x3556D0u;
    {
        const bool branch_taken_0x3556d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3556D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556D0u;
        // 0x3556d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556d0) {
            ctx->pc = 0x3556E0u;
            goto label_3556e0;
        }
    }
    ctx->pc = 0x3556D8u;
label_3556d8:
    // 0x3556d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3556dc:
    if (ctx->pc == 0x3556DCu) {
        ctx->pc = 0x3556DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556D8u;
        // 0x3556dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3556E0u;
        goto label_3556e0;
    }
    ctx->pc = 0x3556D8u;
    {
        const bool branch_taken_0x3556d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3556DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556D8u;
        // 0x3556dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556d8) {
            ctx->pc = 0x3556F0u;
            goto label_3556f0;
        }
    }
    ctx->pc = 0x3556E0u;
label_3556e0:
    // 0x3556e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3556e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3556e4:
    // 0x3556e4: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3556e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3556e8:
    // 0x3556e8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_3556ec:
    if (ctx->pc == 0x3556ECu) {
        ctx->pc = 0x3556ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556E8u;
        // 0x3556ec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3556F0u;
        goto label_3556f0;
    }
    ctx->pc = 0x3556E8u;
    {
        const bool branch_taken_0x3556e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3556e8) {
            ctx->pc = 0x3556ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3556E8u;
            // 0x3556ec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355670;
        }
    }
    ctx->pc = 0x3556F0u;
label_3556f0:
    // 0x3556f0: 0x1660001c  bnez        $s3, . + 4 + (0x1C << 2)
label_3556f4:
    if (ctx->pc == 0x3556F4u) {
        ctx->pc = 0x3556F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556F0u;
        // 0x3556f4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3556F8u;
        goto label_3556f8;
    }
    ctx->pc = 0x3556F0u;
    {
        const bool branch_taken_0x3556f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3556F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556F0u;
        // 0x3556f4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556f0) {
            ctx->pc = 0x355764u;
            goto label_355764;
        }
    }
    ctx->pc = 0x3556F8u;
label_3556f8:
    // 0x3556f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3556f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3556fc:
    // 0x3556fc: 0xc0e8b48  jal         func_3A2D20
label_355700:
    if (ctx->pc == 0x355700u) {
        ctx->pc = 0x355700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556FCu;
        // 0x355700: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355704u;
        goto label_355704;
    }
    ctx->pc = 0x3556FCu;
    SET_GPR_U32(ctx, 31, 0x355704u);
    ctx->pc = 0x355700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556FCu;
    // 0x355700: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3556FCu, 0x355704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355704u;
label_355704:
    // 0x355704: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_355708:
    // 0x355708: 0xc0e8b68  jal         func_3A2DA0
label_35570c:
    if (ctx->pc == 0x35570Cu) {
        ctx->pc = 0x35570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355708u;
        // 0x35570c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355710u;
        goto label_355710;
    }
    ctx->pc = 0x355708u;
    SET_GPR_U32(ctx, 31, 0x355710u);
    ctx->pc = 0x35570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355708u;
    // 0x35570c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x355708u, 0x355710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355710u;
label_355710:
    // 0x355710: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_355714:
    // 0x355714: 0xc0e8b70  jal         func_3A2DC0
label_355718:
    if (ctx->pc == 0x355718u) {
        ctx->pc = 0x355718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355714u;
        // 0x355718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35571Cu;
        goto label_35571c;
    }
    ctx->pc = 0x355714u;
    SET_GPR_U32(ctx, 31, 0x35571Cu);
    ctx->pc = 0x355718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355714u;
    // 0x355718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x355714u, 0x35571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35571Cu;
label_35571c:
    // 0x35571c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x35571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_355720:
    // 0x355720: 0xc0e8b68  jal         func_3A2DA0
label_355724:
    if (ctx->pc == 0x355724u) {
        ctx->pc = 0x355724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355720u;
        // 0x355724: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355728u;
        goto label_355728;
    }
    ctx->pc = 0x355720u;
    SET_GPR_U32(ctx, 31, 0x355728u);
    ctx->pc = 0x355724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355720u;
    // 0x355724: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x355720u, 0x355728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355728u;
label_355728:
    // 0x355728: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_35572c:
    // 0x35572c: 0xc0e8b58  jal         func_3A2D60
label_355730:
    if (ctx->pc == 0x355730u) {
        ctx->pc = 0x355730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35572Cu;
        // 0x355730: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355734u;
        goto label_355734;
    }
    ctx->pc = 0x35572Cu;
    SET_GPR_U32(ctx, 31, 0x355734u);
    ctx->pc = 0x355730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35572Cu;
    // 0x355730: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x35572Cu, 0x355734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355734u;
label_355734:
    // 0x355734: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_355738:
    // 0x355738: 0xc0e8b58  jal         func_3A2D60
label_35573c:
    if (ctx->pc == 0x35573Cu) {
        ctx->pc = 0x35573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355738u;
        // 0x35573c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355740u;
        goto label_355740;
    }
    ctx->pc = 0x355738u;
    SET_GPR_U32(ctx, 31, 0x355740u);
    ctx->pc = 0x35573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355738u;
    // 0x35573c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x355738u, 0x355740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355740u;
label_355740:
    // 0x355740: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_355744:
    // 0x355744: 0xc0e8b68  jal         func_3A2DA0
label_355748:
    if (ctx->pc == 0x355748u) {
        ctx->pc = 0x355748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355744u;
        // 0x355748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35574Cu;
        goto label_35574c;
    }
    ctx->pc = 0x355744u;
    SET_GPR_U32(ctx, 31, 0x35574Cu);
    ctx->pc = 0x355748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355744u;
    // 0x355748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x355744u, 0x35574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35574Cu;
label_35574c:
    // 0x35574c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x35574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_355750:
    // 0x355750: 0xc0e8b90  jal         func_3A2E40
label_355754:
    if (ctx->pc == 0x355754u) {
        ctx->pc = 0x355754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355750u;
        // 0x355754: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355758u;
        goto label_355758;
    }
    ctx->pc = 0x355750u;
    SET_GPR_U32(ctx, 31, 0x355758u);
    ctx->pc = 0x355754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355750u;
    // 0x355754: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x355750u, 0x355758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355758u;
label_355758:
    // 0x355758: 0xc0e8b50  jal         func_3A2D40
label_35575c:
    if (ctx->pc == 0x35575Cu) {
        ctx->pc = 0x35575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355758u;
        // 0x35575c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355760u;
        goto label_355760;
    }
    ctx->pc = 0x355758u;
    SET_GPR_U32(ctx, 31, 0x355760u);
    ctx->pc = 0x35575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355758u;
    // 0x35575c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x355758u, 0x355760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355760u;
label_355760:
    // 0x355760: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x355760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_355764:
    // 0x355764: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x355764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_355768:
    // 0x355768: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x355768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_35576c:
    // 0x35576c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x35576cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_355770:
    // 0x355770: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x355770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_355774:
    // 0x355774: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x355774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_355778:
    // 0x355778: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x355778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35577c:
    // 0x35577c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x35577cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_355780:
    // 0x355780: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x355780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_355784:
    // 0x355784: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x355784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_355788:
    // 0x355788: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x355788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35578c:
    // 0x35578c: 0x3e00008  jr          $ra
label_355790:
    if (ctx->pc == 0x355790u) {
        ctx->pc = 0x355790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35578Cu;
        // 0x355790: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355794u;
        goto label_355794;
    }
    ctx->pc = 0x35578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35578Cu;
        // 0x355790: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355794u;
label_355794:
    // 0x355794: 0x0  nop
    ctx->pc = 0x355794u;
    // NOP
    ctx->pc = 0x355798u;
}
