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

// Function: sub_004756C0
// Address: 0x4756c0 - 0x4757e0
void sub_004756C0_0x4756c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004756C0_0x4756c0");
#endif

    switch (ctx->pc) {
        case 0x4756c0u: goto label_4756c0;
        case 0x4756c4u: goto label_4756c4;
        case 0x4756c8u: goto label_4756c8;
        case 0x4756ccu: goto label_4756cc;
        case 0x4756d0u: goto label_4756d0;
        case 0x4756d4u: goto label_4756d4;
        case 0x4756d8u: goto label_4756d8;
        case 0x4756dcu: goto label_4756dc;
        case 0x4756e0u: goto label_4756e0;
        case 0x4756e4u: goto label_4756e4;
        case 0x4756e8u: goto label_4756e8;
        case 0x4756ecu: goto label_4756ec;
        case 0x4756f0u: goto label_4756f0;
        case 0x4756f4u: goto label_4756f4;
        case 0x4756f8u: goto label_4756f8;
        case 0x4756fcu: goto label_4756fc;
        case 0x475700u: goto label_475700;
        case 0x475704u: goto label_475704;
        case 0x475708u: goto label_475708;
        case 0x47570cu: goto label_47570c;
        case 0x475710u: goto label_475710;
        case 0x475714u: goto label_475714;
        case 0x475718u: goto label_475718;
        case 0x47571cu: goto label_47571c;
        case 0x475720u: goto label_475720;
        case 0x475724u: goto label_475724;
        case 0x475728u: goto label_475728;
        case 0x47572cu: goto label_47572c;
        case 0x475730u: goto label_475730;
        case 0x475734u: goto label_475734;
        case 0x475738u: goto label_475738;
        case 0x47573cu: goto label_47573c;
        case 0x475740u: goto label_475740;
        case 0x475744u: goto label_475744;
        case 0x475748u: goto label_475748;
        case 0x47574cu: goto label_47574c;
        case 0x475750u: goto label_475750;
        case 0x475754u: goto label_475754;
        case 0x475758u: goto label_475758;
        case 0x47575cu: goto label_47575c;
        case 0x475760u: goto label_475760;
        case 0x475764u: goto label_475764;
        case 0x475768u: goto label_475768;
        case 0x47576cu: goto label_47576c;
        case 0x475770u: goto label_475770;
        case 0x475774u: goto label_475774;
        case 0x475778u: goto label_475778;
        case 0x47577cu: goto label_47577c;
        case 0x475780u: goto label_475780;
        case 0x475784u: goto label_475784;
        case 0x475788u: goto label_475788;
        case 0x47578cu: goto label_47578c;
        case 0x475790u: goto label_475790;
        case 0x475794u: goto label_475794;
        case 0x475798u: goto label_475798;
        case 0x47579cu: goto label_47579c;
        case 0x4757a0u: goto label_4757a0;
        case 0x4757a4u: goto label_4757a4;
        case 0x4757a8u: goto label_4757a8;
        case 0x4757acu: goto label_4757ac;
        case 0x4757b0u: goto label_4757b0;
        case 0x4757b4u: goto label_4757b4;
        case 0x4757b8u: goto label_4757b8;
        case 0x4757bcu: goto label_4757bc;
        case 0x4757c0u: goto label_4757c0;
        case 0x4757c4u: goto label_4757c4;
        case 0x4757c8u: goto label_4757c8;
        case 0x4757ccu: goto label_4757cc;
        case 0x4757d0u: goto label_4757d0;
        case 0x4757d4u: goto label_4757d4;
        case 0x4757d8u: goto label_4757d8;
        case 0x4757dcu: goto label_4757dc;
        default: break;
    }

    ctx->pc = 0x4756c0u;

label_4756c0:
    // 0x4756c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4756c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4756c4:
    // 0x4756c4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4756c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4756c8:
    // 0x4756c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4756c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4756cc:
    // 0x4756cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4756ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4756d0:
    // 0x4756d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4756d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4756d4:
    // 0x4756d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4756d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4756d8:
    // 0x4756d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4756d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4756dc:
    // 0x4756dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4756dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4756e0:
    // 0x4756e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4756e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4756e4:
    // 0x4756e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4756e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4756e8:
    // 0x4756e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4756e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4756ec:
    // 0x4756ec: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x4756ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4756f0:
    // 0x4756f0: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_4756f4:
    if (ctx->pc == 0x4756F4u) {
        ctx->pc = 0x4756F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4756F0u;
        // 0x4756f4: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4756F8u;
        goto label_4756f8;
    }
    ctx->pc = 0x4756F0u;
    {
        const bool branch_taken_0x4756f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4756F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4756F0u;
        // 0x4756f4: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4756f0) {
            ctx->pc = 0x475778u;
            goto label_475778;
        }
    }
    ctx->pc = 0x4756F8u;
label_4756f8:
    // 0x4756f8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4756f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4756fc:
    // 0x4756fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4756fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_475700:
    // 0x475700: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_475704:
    if (ctx->pc == 0x475704u) {
        ctx->pc = 0x475704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475700u;
        // 0x475704: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475708u;
        goto label_475708;
    }
    ctx->pc = 0x475700u;
    {
        const bool branch_taken_0x475700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475700u;
        // 0x475704: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475700) {
            ctx->pc = 0x475764u;
            goto label_475764;
        }
    }
    ctx->pc = 0x475708u;
label_475708:
    // 0x475708: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x475708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_47570c:
    // 0x47570c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x47570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_475710:
    // 0x475710: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x475710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_475714:
    // 0x475714: 0x0  nop
    ctx->pc = 0x475714u;
    // NOP
label_475718:
    // 0x475718: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x475718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47571c:
    // 0x47571c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_475720:
    if (ctx->pc == 0x475720u) {
        ctx->pc = 0x475720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47571Cu;
        // 0x475720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475724u;
        goto label_475724;
    }
    ctx->pc = 0x47571Cu;
    {
        const bool branch_taken_0x47571c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x475720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47571Cu;
        // 0x475720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47571c) {
            ctx->pc = 0x475758u;
            goto label_475758;
        }
    }
    ctx->pc = 0x475724u;
label_475724:
    // 0x475724: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x475724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_475728:
    // 0x475728: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_47572c:
    if (ctx->pc == 0x47572Cu) {
        ctx->pc = 0x47572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475728u;
        // 0x47572c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475730u;
        goto label_475730;
    }
    ctx->pc = 0x475728u;
    {
        const bool branch_taken_0x475728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475728) {
            ctx->pc = 0x47572Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475728u;
            // 0x47572c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475754u;
            goto label_475754;
        }
    }
    ctx->pc = 0x475730u;
label_475730:
    // 0x475730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x475730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_475734:
    // 0x475734: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_475738:
    if (ctx->pc == 0x475738u) {
        ctx->pc = 0x475738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475734u;
        // 0x475738: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47573Cu;
        goto label_47573c;
    }
    ctx->pc = 0x475734u;
    {
        const bool branch_taken_0x475734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475734) {
            ctx->pc = 0x475738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475734u;
            // 0x475738: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475754u;
            goto label_475754;
        }
    }
    ctx->pc = 0x47573Cu;
label_47573c:
    // 0x47573c: 0xc11d5a4  jal         func_475690
label_475740:
    if (ctx->pc == 0x475740u) {
        ctx->pc = 0x475740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47573Cu;
        // 0x475740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475744u;
        goto label_475744;
    }
    ctx->pc = 0x47573Cu;
    SET_GPR_U32(ctx, 31, 0x475744u);
    ctx->pc = 0x475740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47573Cu;
    // 0x475740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x475690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475690u, 0x47573Cu, 0x475744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475744u;
label_475744:
    // 0x475744: 0xc11fa54  jal         func_47E950
label_475748:
    if (ctx->pc == 0x475748u) {
        ctx->pc = 0x475748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475744u;
        // 0x475748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47574Cu;
        goto label_47574c;
    }
    ctx->pc = 0x475744u;
    SET_GPR_U32(ctx, 31, 0x47574Cu);
    ctx->pc = 0x475748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475744u;
    // 0x475748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x475744u, 0x47574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47574Cu;
label_47574c:
    // 0x47574c: 0x10000002  b           . + 4 + (0x2 << 2)
label_475750:
    if (ctx->pc == 0x475750u) {
        ctx->pc = 0x475750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47574Cu;
        // 0x475750: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475754u;
        goto label_475754;
    }
    ctx->pc = 0x47574Cu;
    {
        const bool branch_taken_0x47574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47574Cu;
        // 0x475750: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47574c) {
            ctx->pc = 0x475758u;
            goto label_475758;
        }
    }
    ctx->pc = 0x475754u;
label_475754:
    // 0x475754: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x475754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_475758:
    // 0x475758: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x475758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_47575c:
    // 0x47575c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_475760:
    if (ctx->pc == 0x475760u) {
        ctx->pc = 0x475760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47575Cu;
        // 0x475760: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475764u;
        goto label_475764;
    }
    ctx->pc = 0x47575Cu;
    {
        const bool branch_taken_0x47575c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47575Cu;
        // 0x475760: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47575c) {
            ctx->pc = 0x475718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475718;
        }
    }
    ctx->pc = 0x475764u;
label_475764:
    // 0x475764: 0x26c3ad18  addiu       $v1, $s6, -0x52E8
    ctx->pc = 0x475764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
label_475768:
    // 0x475768: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x475768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_47576c:
    // 0x47576c: 0x40f809  jalr        $v0
label_475770:
    if (ctx->pc == 0x475770u) {
        ctx->pc = 0x475770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47576Cu;
        // 0x475770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475774u;
        goto label_475774;
    }
    ctx->pc = 0x47576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475774u);
        ctx->pc = 0x475770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47576Cu;
        // 0x475770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47576Cu, 0x475774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475774u;
label_475774:
    // 0x475774: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x475774u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_475778:
    // 0x475778: 0x26c3ad18  addiu       $v1, $s6, -0x52E8
    ctx->pc = 0x475778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
label_47577c:
    // 0x47577c: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x47577cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_475780:
    // 0x475780: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x475780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_475784:
    // 0x475784: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x475784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_475788:
    // 0x475788: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x475788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_47578c:
    // 0x47578c: 0x40f809  jalr        $v0
label_475790:
    if (ctx->pc == 0x475790u) {
        ctx->pc = 0x475790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47578Cu;
        // 0x475790: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x475794u;
        goto label_475794;
    }
    ctx->pc = 0x47578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475794u);
        ctx->pc = 0x475790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47578Cu;
        // 0x475790: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47578Cu, 0x475794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475794u;
label_475794:
    // 0x475794: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_475798:
    if (ctx->pc == 0x475798u) {
        ctx->pc = 0x475798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475794u;
        // 0x475798: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47579Cu;
        goto label_47579c;
    }
    ctx->pc = 0x475794u;
    {
        const bool branch_taken_0x475794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475794u;
        // 0x475798: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475794) {
            ctx->pc = 0x4757B4u;
            goto label_4757b4;
        }
    }
    ctx->pc = 0x47579Cu;
label_47579c:
    // 0x47579c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x47579cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_4757a0:
    // 0x4757a0: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x4757a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_4757a4:
    // 0x4757a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4757a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4757a8:
    // 0x4757a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4757a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4757ac:
    // 0x4757ac: 0xc10c1fa  jal         func_4307E8
label_4757b0:
    if (ctx->pc == 0x4757B0u) {
        ctx->pc = 0x4757B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4757ACu;
        // 0x4757b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4757B4u;
        goto label_4757b4;
    }
    ctx->pc = 0x4757ACu;
    SET_GPR_U32(ctx, 31, 0x4757B4u);
    ctx->pc = 0x4757B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4757ACu;
    // 0x4757b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4757ACu, 0x4757B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4757B4u;
label_4757b4:
    // 0x4757b4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4757b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4757b8:
    // 0x4757b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4757b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4757bc:
    // 0x4757bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4757bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4757c0:
    // 0x4757c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4757c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4757c4:
    // 0x4757c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4757c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4757c8:
    // 0x4757c8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4757c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4757cc:
    // 0x4757cc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4757ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4757d0:
    // 0x4757d0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4757d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4757d4:
    // 0x4757d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4757d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4757d8:
    // 0x4757d8: 0x3e00008  jr          $ra
label_4757dc:
    if (ctx->pc == 0x4757DCu) {
        ctx->pc = 0x4757DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4757D8u;
        // 0x4757dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4757E0u;
        goto label_fallthrough_0x4757d8;
    }
    ctx->pc = 0x4757D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4757DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4757D8u;
        // 0x4757dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4757D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4757d8:
    ctx->pc = 0x4757E0u;
}
