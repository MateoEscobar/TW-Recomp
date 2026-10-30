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

// Function: sub_004A8700
// Address: 0x4a8700 - 0x4a8838
void sub_004A8700_0x4a8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8700_0x4a8700");
#endif

    switch (ctx->pc) {
        case 0x4a8718u: goto label_4a8718;
        case 0x4a8728u: goto label_4a8728;
        case 0x4a873cu: goto label_4a873c;
        case 0x4a8758u: goto label_4a8758;
        case 0x4a8760u: goto label_4a8760;
        case 0x4a8768u: goto label_4a8768;
        case 0x4a8798u: goto label_4a8798;
        case 0x4a87d0u: goto label_4a87d0;
        case 0x4a87e0u: goto label_4a87e0;
        case 0x4a8824u: goto label_4a8824;
        default: break;
    }

    ctx->pc = 0x4a8700u;

    // 0x4a8700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a8704: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a8704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a8708: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4a8708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4a870c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a8710: 0xc129d72  jal         func_4A75C8
    ctx->pc = 0x4A8710u;
    SET_GPR_U32(ctx, 31, 0x4A8718u);
    ctx->pc = 0x4A8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8710u;
    // 0x4a8714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A75C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A75C8u, 0x4A8710u, 0x4A8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8718u;
label_4a8718:
    // 0x4a8718: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x4A8718u;
    {
        const bool branch_taken_0x4a8718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8718) {
            ctx->pc = 0x4A871Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8718u;
            // 0x4a871c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8828u;
            goto label_4a8828;
        }
    }
    ctx->pc = 0x4A8720u;
    // 0x4a8720: 0xc129ec8  jal         func_4A7B20
    ctx->pc = 0x4A8720u;
    SET_GPR_U32(ctx, 31, 0x4A8728u);
    ctx->pc = 0x4A8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8720u;
    // 0x4a8724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7B20u, 0x4A8720u, 0x4A8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8728u;
label_4a8728:
    // 0x4a8728: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x4A8728u;
    {
        const bool branch_taken_0x4a8728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8728) {
            ctx->pc = 0x4A872Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8728u;
            // 0x4a872c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8828u;
            goto label_4a8828;
        }
    }
    ctx->pc = 0x4A8730u;
    // 0x4a8730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8734: 0xc129fa8  jal         func_4A7EA0
    ctx->pc = 0x4A8734u;
    SET_GPR_U32(ctx, 31, 0x4A873Cu);
    ctx->pc = 0x4A8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8734u;
    // 0x4a8738: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7EA0u, 0x4A8734u, 0x4A873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A873Cu;
label_4a873c:
    // 0x4a873c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x4A873Cu;
    {
        const bool branch_taken_0x4a873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a873c) {
            ctx->pc = 0x4A8740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A873Cu;
            // 0x4a8740: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8828u;
            goto label_4a8828;
        }
    }
    ctx->pc = 0x4A8744u;
    // 0x4a8744: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4a8744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8748: 0x11000032  beqz        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4A8748u;
    {
        const bool branch_taken_0x4a8748 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8748u;
        // 0x4a874c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8748) {
            ctx->pc = 0x4A8814u;
            goto label_4a8814;
        }
    }
    ctx->pc = 0x4A8750u;
    // 0x4a8750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a8750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8754: 0x0  nop
    ctx->pc = 0x4a8754u;
    // NOP
label_4a8758:
    // 0x4a8758: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a8758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a875c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4a875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8760:
    // 0x4a8760: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A8760u;
    {
        const bool branch_taken_0x4a8760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8760u;
        // 0x4a8764: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8760) {
            ctx->pc = 0x4A8784u;
            goto label_4a8784;
        }
    }
    ctx->pc = 0x4A8768u;
label_4a8768:
    // 0x4a8768: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a8768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a876c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4a876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a8770: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a8774: 0x0  nop
    ctx->pc = 0x4a8774u;
    // NOP
    // 0x4a8778: 0x0  nop
    ctx->pc = 0x4a8778u;
    // NOP
    // 0x4a877c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A877Cu;
    {
        const bool branch_taken_0x4a877c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A877Cu;
        // 0x4a8780: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a877c) {
            ctx->pc = 0x4A8768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8768;
        }
    }
    ctx->pc = 0x4A8784u;
label_4a8784:
    // 0x4a8784: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A8784u;
    {
        const bool branch_taken_0x4a8784 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8784) {
            ctx->pc = 0x4A8788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8784u;
            // 0x4a8788: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8760;
        }
    }
    ctx->pc = 0x4A878Cu;
    // 0x4a878c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4a878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4a8790: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A8790u;
    {
        const bool branch_taken_0x4a8790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8790u;
        // 0x4a8794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8790) {
            ctx->pc = 0x4A87B4u;
            goto label_4a87b4;
        }
    }
    ctx->pc = 0x4A8798u;
label_4a8798:
    // 0x4a8798: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x4a8798u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x4a879c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4a879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4a87a0: 0x0  nop
    ctx->pc = 0x4a87a0u;
    // NOP
    // 0x4a87a4: 0x0  nop
    ctx->pc = 0x4a87a4u;
    // NOP
    // 0x4a87a8: 0x0  nop
    ctx->pc = 0x4a87a8u;
    // NOP
    // 0x4a87ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A87ACu;
    {
        const bool branch_taken_0x4a87ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A87ACu;
        // 0x4a87b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87ac) {
            ctx->pc = 0x4A8798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8798;
        }
    }
    ctx->pc = 0x4A87B4u;
label_4a87b4:
    // 0x4a87b4: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x4a87b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4a87b8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x4a87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a87bc: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x4a87bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x4a87c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a87c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a87c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4a87c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a87c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4a87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a87cc: 0x0  nop
    ctx->pc = 0x4a87ccu;
    // NOP
label_4a87d0:
    // 0x4a87d0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4A87D0u;
    {
        const bool branch_taken_0x4a87d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a87d0) {
            ctx->pc = 0x4A87D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A87D0u;
            // 0x4a87d4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8800u;
            goto label_4a8800;
        }
    }
    ctx->pc = 0x4A87D8u;
    // 0x4a87d8: 0xe93004  sllv        $a2, $t1, $a3
    ctx->pc = 0x4a87d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a87dc: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x4a87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
label_4a87e0:
    // 0x4a87e0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a87e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a87e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a87ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4a87ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x4a87f0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4a87f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a87f4: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A87F4u;
    {
        const bool branch_taken_0x4a87f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a87f4) {
            ctx->pc = 0x4A87F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A87F4u;
            // 0x4a87f8: 0xac87001c  sw          $a3, 0x1C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A87E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a87e0;
        }
    }
    ctx->pc = 0x4A87FCu;
    // 0x4a87fc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4a87fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a8800:
    // 0x4a8800: 0x54a0fff3  bnel        $a1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x4A8800u;
    {
        const bool branch_taken_0x4a8800 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8800) {
            ctx->pc = 0x4A8804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8800u;
            // 0x4a8804: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A87D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a87d0;
        }
    }
    ctx->pc = 0x4A8808u;
    // 0x4a8808: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x4a8808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4a880c: 0x1500ffd2  bnez        $t0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x4A880Cu;
    {
        const bool branch_taken_0x4a880c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A880Cu;
        // 0x4a8810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a880c) {
            ctx->pc = 0x4A8758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8758;
        }
    }
    ctx->pc = 0x4A8814u;
label_4a8814:
    // 0x4a8814: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a8814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a881c: 0xc12a07c  jal         func_4A81F0
    ctx->pc = 0x4A881Cu;
    SET_GPR_U32(ctx, 31, 0x4A8824u);
    ctx->pc = 0x4A8820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A881Cu;
    // 0x4a8820: 0xae0a000c  sw          $t2, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A81F0u, 0x4A881Cu, 0x4A8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8824u;
label_4a8824:
    // 0x4a8824: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a8824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8828:
    // 0x4a8828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a882c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A882Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A882Cu;
        // 0x4a8830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A882Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8834u;
    // 0x4a8834: 0x0  nop
    ctx->pc = 0x4a8834u;
    // NOP
    ctx->pc = 0x4a8838u;
}
