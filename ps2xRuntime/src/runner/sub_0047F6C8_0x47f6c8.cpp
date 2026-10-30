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

// Function: sub_0047F6C8
// Address: 0x47f6c8 - 0x47f808
void sub_0047F6C8_0x47f6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F6C8_0x47f6c8");
#endif

    switch (ctx->pc) {
        case 0x47f6c8u: goto label_47f6c8;
        case 0x47f6ccu: goto label_47f6cc;
        case 0x47f6d0u: goto label_47f6d0;
        case 0x47f6d4u: goto label_47f6d4;
        case 0x47f6d8u: goto label_47f6d8;
        case 0x47f6dcu: goto label_47f6dc;
        case 0x47f6e0u: goto label_47f6e0;
        case 0x47f6e4u: goto label_47f6e4;
        case 0x47f6e8u: goto label_47f6e8;
        case 0x47f6ecu: goto label_47f6ec;
        case 0x47f6f0u: goto label_47f6f0;
        case 0x47f6f4u: goto label_47f6f4;
        case 0x47f6f8u: goto label_47f6f8;
        case 0x47f6fcu: goto label_47f6fc;
        case 0x47f700u: goto label_47f700;
        case 0x47f704u: goto label_47f704;
        case 0x47f708u: goto label_47f708;
        case 0x47f70cu: goto label_47f70c;
        case 0x47f710u: goto label_47f710;
        case 0x47f714u: goto label_47f714;
        case 0x47f718u: goto label_47f718;
        case 0x47f71cu: goto label_47f71c;
        case 0x47f720u: goto label_47f720;
        case 0x47f724u: goto label_47f724;
        case 0x47f728u: goto label_47f728;
        case 0x47f72cu: goto label_47f72c;
        case 0x47f730u: goto label_47f730;
        case 0x47f734u: goto label_47f734;
        case 0x47f738u: goto label_47f738;
        case 0x47f73cu: goto label_47f73c;
        case 0x47f740u: goto label_47f740;
        case 0x47f744u: goto label_47f744;
        case 0x47f748u: goto label_47f748;
        case 0x47f74cu: goto label_47f74c;
        case 0x47f750u: goto label_47f750;
        case 0x47f754u: goto label_47f754;
        case 0x47f758u: goto label_47f758;
        case 0x47f75cu: goto label_47f75c;
        case 0x47f760u: goto label_47f760;
        case 0x47f764u: goto label_47f764;
        case 0x47f768u: goto label_47f768;
        case 0x47f76cu: goto label_47f76c;
        case 0x47f770u: goto label_47f770;
        case 0x47f774u: goto label_47f774;
        case 0x47f778u: goto label_47f778;
        case 0x47f77cu: goto label_47f77c;
        case 0x47f780u: goto label_47f780;
        case 0x47f784u: goto label_47f784;
        case 0x47f788u: goto label_47f788;
        case 0x47f78cu: goto label_47f78c;
        case 0x47f790u: goto label_47f790;
        case 0x47f794u: goto label_47f794;
        case 0x47f798u: goto label_47f798;
        case 0x47f79cu: goto label_47f79c;
        case 0x47f7a0u: goto label_47f7a0;
        case 0x47f7a4u: goto label_47f7a4;
        case 0x47f7a8u: goto label_47f7a8;
        case 0x47f7acu: goto label_47f7ac;
        case 0x47f7b0u: goto label_47f7b0;
        case 0x47f7b4u: goto label_47f7b4;
        case 0x47f7b8u: goto label_47f7b8;
        case 0x47f7bcu: goto label_47f7bc;
        case 0x47f7c0u: goto label_47f7c0;
        case 0x47f7c4u: goto label_47f7c4;
        case 0x47f7c8u: goto label_47f7c8;
        case 0x47f7ccu: goto label_47f7cc;
        case 0x47f7d0u: goto label_47f7d0;
        case 0x47f7d4u: goto label_47f7d4;
        case 0x47f7d8u: goto label_47f7d8;
        case 0x47f7dcu: goto label_47f7dc;
        case 0x47f7e0u: goto label_47f7e0;
        case 0x47f7e4u: goto label_47f7e4;
        case 0x47f7e8u: goto label_47f7e8;
        case 0x47f7ecu: goto label_47f7ec;
        case 0x47f7f0u: goto label_47f7f0;
        case 0x47f7f4u: goto label_47f7f4;
        case 0x47f7f8u: goto label_47f7f8;
        case 0x47f7fcu: goto label_47f7fc;
        case 0x47f800u: goto label_47f800;
        case 0x47f804u: goto label_47f804;
        default: break;
    }

    ctx->pc = 0x47f6c8u;

label_47f6c8:
    // 0x47f6c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47f6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47f6cc:
    // 0x47f6cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47f6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_47f6d0:
    // 0x47f6d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47f6d4:
    // 0x47f6d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47f6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f6d8:
    // 0x47f6d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_47f6dc:
    // 0x47f6dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47f6dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47f6e0:
    // 0x47f6e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x47f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_47f6e4:
    // 0x47f6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47f6e8:
    // 0x47f6e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x47f6e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f6ec:
    // 0x47f6ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_47f6f0:
    // 0x47f6f0: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x47f6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_47f6f4:
    // 0x47f6f4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_47f6f8:
    if (ctx->pc == 0x47F6F8u) {
        ctx->pc = 0x47F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F6F4u;
        // 0x47f6f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F6FCu;
        goto label_47f6fc;
    }
    ctx->pc = 0x47F6F4u;
    {
        const bool branch_taken_0x47f6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F6F4u;
        // 0x47f6f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f6f4) {
            ctx->pc = 0x47F730u;
            goto label_47f730;
        }
    }
    ctx->pc = 0x47F6FCu;
label_47f6fc:
    // 0x47f6fc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47f700:
    // 0x47f700: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47f704:
    if (ctx->pc == 0x47F704u) {
        ctx->pc = 0x47F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F700u;
        // 0x47f704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F708u;
        goto label_47f708;
    }
    ctx->pc = 0x47F700u;
    {
        const bool branch_taken_0x47f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F700u;
        // 0x47f704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f700) {
            ctx->pc = 0x47F724u;
            goto label_47f724;
        }
    }
    ctx->pc = 0x47F708u;
label_47f708:
    // 0x47f708: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47f708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f70c:
    // 0x47f70c: 0x40f809  jalr        $v0
label_47f710:
    if (ctx->pc == 0x47F710u) {
        ctx->pc = 0x47F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F70Cu;
        // 0x47f710: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F714u;
        goto label_47f714;
    }
    ctx->pc = 0x47F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F714u);
        ctx->pc = 0x47F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F70Cu;
        // 0x47f710: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F70Cu, 0x47F714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F714u;
label_47f714:
    // 0x47f714: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x47f714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f718:
    // 0x47f718: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_47f71c:
    if (ctx->pc == 0x47F71Cu) {
        ctx->pc = 0x47F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F718u;
        // 0x47f71c: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F720u;
        goto label_47f720;
    }
    ctx->pc = 0x47F718u;
    {
        const bool branch_taken_0x47f718 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x47F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F718u;
        // 0x47f71c: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f718) {
            ctx->pc = 0x47F724u;
            goto label_47f724;
        }
    }
    ctx->pc = 0x47F720u;
label_47f720:
    // 0x47f720: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x47f720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47f724:
    // 0x47f724: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47f724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47f728:
    // 0x47f728: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_47f72c:
    if (ctx->pc == 0x47F72Cu) {
        ctx->pc = 0x47F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F728u;
        // 0x47f72c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F730u;
        goto label_47f730;
    }
    ctx->pc = 0x47F728u;
    {
        const bool branch_taken_0x47f728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f728) {
            ctx->pc = 0x47F72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F728u;
            // 0x47f72c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f700;
        }
    }
    ctx->pc = 0x47F730u;
label_47f730:
    // 0x47f730: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x47f730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_47f734:
    // 0x47f734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47f734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f738:
    // 0x47f738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f73c:
    // 0x47f73c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f740:
    // 0x47f740: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x47f740u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_47f744:
    // 0x47f744: 0xc11ef26  jal         func_47BC98
label_47f748:
    if (ctx->pc == 0x47F748u) {
        ctx->pc = 0x47F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F744u;
        // 0x47f748: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F74Cu;
        goto label_47f74c;
    }
    ctx->pc = 0x47F744u;
    SET_GPR_U32(ctx, 31, 0x47F74Cu);
    ctx->pc = 0x47F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F744u;
    // 0x47f748: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x47F744u, 0x47F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F74Cu;
label_47f74c:
    // 0x47f74c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_47f750:
    if (ctx->pc == 0x47F750u) {
        ctx->pc = 0x47F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F74Cu;
        // 0x47f750: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F754u;
        goto label_47f754;
    }
    ctx->pc = 0x47F74Cu;
    {
        const bool branch_taken_0x47f74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f74c) {
            ctx->pc = 0x47F750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F74Cu;
            // 0x47f750: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F75Cu;
            goto label_47f75c;
        }
    }
    ctx->pc = 0x47F754u;
label_47f754:
    // 0x47f754: 0x10000023  b           . + 4 + (0x23 << 2)
label_47f758:
    if (ctx->pc == 0x47F758u) {
        ctx->pc = 0x47F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F754u;
        // 0x47f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F75Cu;
        goto label_47f75c;
    }
    ctx->pc = 0x47F754u;
    {
        const bool branch_taken_0x47f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F754u;
        // 0x47f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f754) {
            ctx->pc = 0x47F7E4u;
            goto label_47f7e4;
        }
    }
    ctx->pc = 0x47F75Cu;
label_47f75c:
    // 0x47f75c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_47f760:
    if (ctx->pc == 0x47F760u) {
        ctx->pc = 0x47F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F75Cu;
        // 0x47f760: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F764u;
        goto label_47f764;
    }
    ctx->pc = 0x47F75Cu;
    {
        const bool branch_taken_0x47f75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F75Cu;
        // 0x47f760: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f75c) {
            ctx->pc = 0x47F7E4u;
            goto label_47f7e4;
        }
    }
    ctx->pc = 0x47F764u;
label_47f764:
    // 0x47f764: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x47f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47f768:
    // 0x47f768: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_47f76c:
    if (ctx->pc == 0x47F76Cu) {
        ctx->pc = 0x47F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F768u;
        // 0x47f76c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F770u;
        goto label_47f770;
    }
    ctx->pc = 0x47F768u;
    {
        const bool branch_taken_0x47f768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f768) {
            ctx->pc = 0x47F76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F768u;
            // 0x47f76c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F7D8u;
            goto label_47f7d8;
        }
    }
    ctx->pc = 0x47F770u;
label_47f770:
    // 0x47f770: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47f774:
    // 0x47f774: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_47f778:
    if (ctx->pc == 0x47F778u) {
        ctx->pc = 0x47F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F774u;
        // 0x47f778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F77Cu;
        goto label_47f77c;
    }
    ctx->pc = 0x47F774u;
    {
        const bool branch_taken_0x47f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F774u;
        // 0x47f778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f774) {
            ctx->pc = 0x47F7D4u;
            goto label_47f7d4;
        }
    }
    ctx->pc = 0x47F77Cu;
label_47f77c:
    // 0x47f77c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f780:
    // 0x47f780: 0x60f809  jalr        $v1
label_47f784:
    if (ctx->pc == 0x47F784u) {
        ctx->pc = 0x47F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F780u;
        // 0x47f784: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F788u;
        goto label_47f788;
    }
    ctx->pc = 0x47F780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47F788u);
        ctx->pc = 0x47F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F780u;
        // 0x47f784: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F780u, 0x47F788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F788u;
label_47f788:
    // 0x47f788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47f788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f78c:
    // 0x47f78c: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_47f790:
    if (ctx->pc == 0x47F790u) {
        ctx->pc = 0x47F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F78Cu;
        // 0x47f790: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F794u;
        goto label_47f794;
    }
    ctx->pc = 0x47F78Cu;
    {
        const bool branch_taken_0x47f78c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x47F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F78Cu;
        // 0x47f790: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f78c) {
            ctx->pc = 0x47F7D4u;
            goto label_47f7d4;
        }
    }
    ctx->pc = 0x47F794u;
label_47f794:
    // 0x47f794: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x47f794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47f798:
    // 0x47f798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f79c:
    // 0x47f79c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47f79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f7a0:
    // 0x47f7a0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x47f7a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_47f7a4:
    // 0x47f7a4: 0xc11ef26  jal         func_47BC98
label_47f7a8:
    if (ctx->pc == 0x47F7A8u) {
        ctx->pc = 0x47F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7A4u;
        // 0x47f7a8: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F7ACu;
        goto label_47f7ac;
    }
    ctx->pc = 0x47F7A4u;
    SET_GPR_U32(ctx, 31, 0x47F7ACu);
    ctx->pc = 0x47F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F7A4u;
    // 0x47f7a8: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x47F7A4u, 0x47F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F7ACu;
label_47f7ac:
    // 0x47f7ac: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_47f7b0:
    if (ctx->pc == 0x47F7B0u) {
        ctx->pc = 0x47F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7ACu;
        // 0x47f7b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F7B4u;
        goto label_47f7b4;
    }
    ctx->pc = 0x47F7ACu;
    {
        const bool branch_taken_0x47f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7ACu;
        // 0x47f7b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f7ac) {
            ctx->pc = 0x47F754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f754;
        }
    }
    ctx->pc = 0x47F7B4u;
label_47f7b4:
    // 0x47f7b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47f7b8:
    // 0x47f7b8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x47f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f7bc:
    // 0x47f7bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f7c0:
    // 0x47f7c0: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x47f7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47f7c4:
    // 0x47f7c4: 0x40f809  jalr        $v0
label_47f7c8:
    if (ctx->pc == 0x47F7C8u) {
        ctx->pc = 0x47F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7C4u;
        // 0x47f7c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F7CCu;
        goto label_47f7cc;
    }
    ctx->pc = 0x47F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F7CCu);
        ctx->pc = 0x47F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7C4u;
        // 0x47f7c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F7C4u, 0x47F7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F7CCu;
label_47f7cc:
    // 0x47f7cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_47f7d0:
    if (ctx->pc == 0x47F7D0u) {
        ctx->pc = 0x47F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7CCu;
        // 0x47f7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F7D4u;
        goto label_47f7d4;
    }
    ctx->pc = 0x47F7CCu;
    {
        const bool branch_taken_0x47f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7CCu;
        // 0x47f7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f7cc) {
            ctx->pc = 0x47F7E4u;
            goto label_47f7e4;
        }
    }
    ctx->pc = 0x47F7D4u;
label_47f7d4:
    // 0x47f7d4: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47f7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47f7d8:
    // 0x47f7d8: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
label_47f7dc:
    if (ctx->pc == 0x47F7DCu) {
        ctx->pc = 0x47F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7D8u;
        // 0x47f7dc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F7E0u;
        goto label_47f7e0;
    }
    ctx->pc = 0x47F7D8u;
    {
        const bool branch_taken_0x47f7d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f7d8) {
            ctx->pc = 0x47F7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F7D8u;
            // 0x47f7dc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f768;
        }
    }
    ctx->pc = 0x47F7E0u;
label_47f7e0:
    // 0x47f7e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x47f7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47f7e4:
    // 0x47f7e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47f7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47f7e8:
    // 0x47f7e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47f7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47f7ec:
    // 0x47f7ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47f7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f7f0:
    // 0x47f7f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47f7f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f7f4:
    // 0x47f7f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x47f7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f7f8:
    // 0x47f7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47f7fc:
    // 0x47f7fc: 0x3e00008  jr          $ra
label_47f800:
    if (ctx->pc == 0x47F800u) {
        ctx->pc = 0x47F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7FCu;
        // 0x47f800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F804u;
        goto label_47f804;
    }
    ctx->pc = 0x47F7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F7FCu;
        // 0x47f800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F804u;
label_47f804:
    // 0x47f804: 0x0  nop
    ctx->pc = 0x47f804u;
    // NOP
    ctx->pc = 0x47f808u;
}
