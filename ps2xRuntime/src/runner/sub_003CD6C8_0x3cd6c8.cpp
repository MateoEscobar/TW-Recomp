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

// Function: sub_003CD6C8
// Address: 0x3cd6c8 - 0x3cd7b0
void sub_003CD6C8_0x3cd6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD6C8_0x3cd6c8");
#endif

    switch (ctx->pc) {
        case 0x3cd6c8u: goto label_3cd6c8;
        case 0x3cd6ccu: goto label_3cd6cc;
        case 0x3cd6d0u: goto label_3cd6d0;
        case 0x3cd6d4u: goto label_3cd6d4;
        case 0x3cd6d8u: goto label_3cd6d8;
        case 0x3cd6dcu: goto label_3cd6dc;
        case 0x3cd6e0u: goto label_3cd6e0;
        case 0x3cd6e4u: goto label_3cd6e4;
        case 0x3cd6e8u: goto label_3cd6e8;
        case 0x3cd6ecu: goto label_3cd6ec;
        case 0x3cd6f0u: goto label_3cd6f0;
        case 0x3cd6f4u: goto label_3cd6f4;
        case 0x3cd6f8u: goto label_3cd6f8;
        case 0x3cd6fcu: goto label_3cd6fc;
        case 0x3cd700u: goto label_3cd700;
        case 0x3cd704u: goto label_3cd704;
        case 0x3cd708u: goto label_3cd708;
        case 0x3cd70cu: goto label_3cd70c;
        case 0x3cd710u: goto label_3cd710;
        case 0x3cd714u: goto label_3cd714;
        case 0x3cd718u: goto label_3cd718;
        case 0x3cd71cu: goto label_3cd71c;
        case 0x3cd720u: goto label_3cd720;
        case 0x3cd724u: goto label_3cd724;
        case 0x3cd728u: goto label_3cd728;
        case 0x3cd72cu: goto label_3cd72c;
        case 0x3cd730u: goto label_3cd730;
        case 0x3cd734u: goto label_3cd734;
        case 0x3cd738u: goto label_3cd738;
        case 0x3cd73cu: goto label_3cd73c;
        case 0x3cd740u: goto label_3cd740;
        case 0x3cd744u: goto label_3cd744;
        case 0x3cd748u: goto label_3cd748;
        case 0x3cd74cu: goto label_3cd74c;
        case 0x3cd750u: goto label_3cd750;
        case 0x3cd754u: goto label_3cd754;
        case 0x3cd758u: goto label_3cd758;
        case 0x3cd75cu: goto label_3cd75c;
        case 0x3cd760u: goto label_3cd760;
        case 0x3cd764u: goto label_3cd764;
        case 0x3cd768u: goto label_3cd768;
        case 0x3cd76cu: goto label_3cd76c;
        case 0x3cd770u: goto label_3cd770;
        case 0x3cd774u: goto label_3cd774;
        case 0x3cd778u: goto label_3cd778;
        case 0x3cd77cu: goto label_3cd77c;
        case 0x3cd780u: goto label_3cd780;
        case 0x3cd784u: goto label_3cd784;
        case 0x3cd788u: goto label_3cd788;
        case 0x3cd78cu: goto label_3cd78c;
        case 0x3cd790u: goto label_3cd790;
        case 0x3cd794u: goto label_3cd794;
        case 0x3cd798u: goto label_3cd798;
        case 0x3cd79cu: goto label_3cd79c;
        case 0x3cd7a0u: goto label_3cd7a0;
        case 0x3cd7a4u: goto label_3cd7a4;
        case 0x3cd7a8u: goto label_3cd7a8;
        case 0x3cd7acu: goto label_3cd7ac;
        default: break;
    }

    ctx->pc = 0x3cd6c8u;

label_3cd6c8:
    // 0x3cd6c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cd6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cd6cc:
    // 0x3cd6cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3cd6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3cd6d0:
    // 0x3cd6d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3cd6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3cd6d4:
    // 0x3cd6d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cd6d8:
    // 0x3cd6d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3cd6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3cd6dc:
    // 0x3cd6dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cd6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cd6e0:
    // 0x3cd6e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cd6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3cd6e4:
    // 0x3cd6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cd6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3cd6e8:
    // 0x3cd6e8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3cd6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cd6ec:
    // 0x3cd6ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd6f0:
    // 0x3cd6f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cd6f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cd6f4:
    // 0x3cd6f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cd6f8:
    // 0x3cd6f8: 0x40f809  jalr        $v0
label_3cd6fc:
    if (ctx->pc == 0x3CD6FCu) {
        ctx->pc = 0x3CD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6F8u;
        // 0x3cd6fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD700u;
        goto label_3cd700;
    }
    ctx->pc = 0x3CD6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CD700u);
        ctx->pc = 0x3CD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6F8u;
        // 0x3cd6fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD6F8u, 0x3CD700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD700u;
label_3cd700:
    // 0x3cd700: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3cd700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3cd704:
    // 0x3cd704: 0xc0e858c  jal         func_3A1630
label_3cd708:
    if (ctx->pc == 0x3CD708u) {
        ctx->pc = 0x3CD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD704u;
        // 0x3cd708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD70Cu;
        goto label_3cd70c;
    }
    ctx->pc = 0x3CD704u;
    SET_GPR_U32(ctx, 31, 0x3CD70Cu);
    ctx->pc = 0x3CD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD704u;
    // 0x3cd708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CD704u, 0x3CD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD70Cu;
label_3cd70c:
    // 0x3cd70c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3cd70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3cd710:
    // 0x3cd710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cd710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd714:
    // 0x3cd714: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3cd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_3cd718:
    // 0x3cd718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd71c:
    // 0x3cd71c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3cd71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3cd720:
    // 0x3cd720: 0xc0ea14c  jal         func_3A8530
label_3cd724:
    if (ctx->pc == 0x3CD724u) {
        ctx->pc = 0x3CD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD720u;
        // 0x3cd724: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD728u;
        goto label_3cd728;
    }
    ctx->pc = 0x3CD720u;
    SET_GPR_U32(ctx, 31, 0x3CD728u);
    ctx->pc = 0x3CD724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD720u;
    // 0x3cd724: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CD720u, 0x3CD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD728u;
label_3cd728:
    // 0x3cd728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cd728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd72c:
    // 0x3cd72c: 0xc0ea146  jal         func_3A8518
label_3cd730:
    if (ctx->pc == 0x3CD730u) {
        ctx->pc = 0x3CD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD72Cu;
        // 0x3cd730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD734u;
        goto label_3cd734;
    }
    ctx->pc = 0x3CD72Cu;
    SET_GPR_U32(ctx, 31, 0x3CD734u);
    ctx->pc = 0x3CD730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD72Cu;
    // 0x3cd730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CD72Cu, 0x3CD734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD734u;
label_3cd734:
    // 0x3cd734: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cd734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd738:
    // 0x3cd738: 0xc0ea13a  jal         func_3A84E8
label_3cd73c:
    if (ctx->pc == 0x3CD73Cu) {
        ctx->pc = 0x3CD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD738u;
        // 0x3cd73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD740u;
        goto label_3cd740;
    }
    ctx->pc = 0x3CD738u;
    SET_GPR_U32(ctx, 31, 0x3CD740u);
    ctx->pc = 0x3CD73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD738u;
    // 0x3cd73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CD738u, 0x3CD740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD740u;
label_3cd740:
    // 0x3cd740: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cd740u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cd744:
    // 0x3cd744: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cd744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cd748:
    // 0x3cd748: 0xc0ea12a  jal         func_3A84A8
label_3cd74c:
    if (ctx->pc == 0x3CD74Cu) {
        ctx->pc = 0x3CD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD748u;
        // 0x3cd74c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD750u;
        goto label_3cd750;
    }
    ctx->pc = 0x3CD748u;
    SET_GPR_U32(ctx, 31, 0x3CD750u);
    ctx->pc = 0x3CD74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD748u;
    // 0x3cd74c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CD748u, 0x3CD750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD750u;
label_3cd750:
    // 0x3cd750: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3cd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3cd754:
    // 0x3cd754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd758:
    // 0x3cd758: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3cd758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd75c:
    // 0x3cd75c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3cd75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3cd760:
    // 0x3cd760: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3cd760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3cd764:
    // 0x3cd764: 0xc0e896e  jal         func_3A25B8
label_3cd768:
    if (ctx->pc == 0x3CD768u) {
        ctx->pc = 0x3CD768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD764u;
        // 0x3cd768: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD76Cu;
        goto label_3cd76c;
    }
    ctx->pc = 0x3CD764u;
    SET_GPR_U32(ctx, 31, 0x3CD76Cu);
    ctx->pc = 0x3CD768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD764u;
    // 0x3cd768: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3CD764u, 0x3CD76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD76Cu;
label_3cd76c:
    // 0x3cd76c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x3cd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_3cd770:
    // 0x3cd770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd774:
    // 0x3cd774: 0xc0e896c  jal         func_3A25B0
label_3cd778:
    if (ctx->pc == 0x3CD778u) {
        ctx->pc = 0x3CD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD774u;
        // 0x3cd778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD77Cu;
        goto label_3cd77c;
    }
    ctx->pc = 0x3CD774u;
    SET_GPR_U32(ctx, 31, 0x3CD77Cu);
    ctx->pc = 0x3CD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD774u;
    // 0x3cd778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3CD774u, 0x3CD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD77Cu;
label_3cd77c:
    // 0x3cd77c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3cd77cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cd780:
    // 0x3cd780: 0xae130084  sw          $s3, 0x84($s0)
    ctx->pc = 0x3cd780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 19));
label_3cd784:
    // 0x3cd784: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x3cd784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3cd788:
    // 0x3cd788: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3cd788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3cd78c:
    // 0x3cd78c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3cd78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cd790:
    // 0x3cd790: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3cd790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cd794:
    // 0x3cd794: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3cd794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cd798:
    // 0x3cd798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cd798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd79c:
    // 0x3cd79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd7a0:
    // 0x3cd7a0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3cd7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cd7a4:
    // 0x3cd7a4: 0x3e00008  jr          $ra
label_3cd7a8:
    if (ctx->pc == 0x3CD7A8u) {
        ctx->pc = 0x3CD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7A4u;
        // 0x3cd7a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD7ACu;
        goto label_3cd7ac;
    }
    ctx->pc = 0x3CD7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7A4u;
        // 0x3cd7a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD7ACu;
label_3cd7ac:
    // 0x3cd7ac: 0x0  nop
    ctx->pc = 0x3cd7acu;
    // NOP
    ctx->pc = 0x3cd7b0u;
}
