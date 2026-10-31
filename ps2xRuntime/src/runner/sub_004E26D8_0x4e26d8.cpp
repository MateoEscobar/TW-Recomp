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

// Function: sub_004E26D8
// Address: 0x4e26d8 - 0x4e2888
void sub_004E26D8_0x4e26d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E26D8_0x4e26d8");
#endif

    switch (ctx->pc) {
        case 0x4e272cu: goto label_4e272c;
        case 0x4e2760u: goto label_4e2760;
        case 0x4e27b8u: goto label_4e27b8;
        case 0x4e27e8u: goto label_4e27e8;
        case 0x4e2844u: goto label_4e2844;
        case 0x4e2858u: goto label_4e2858;
        case 0x4e2868u: goto label_4e2868;
        default: break;
    }

    ctx->pc = 0x4e26d8u;

    // 0x4e26d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e26d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e26dc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e26dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e26e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e26e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e26e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e26e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e26e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e26ec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e26f0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e26f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e26f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e26f8: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E26F8u;
    {
        const bool branch_taken_0x4e26f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E26F8u;
        // 0x4e26fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e26f8) {
            ctx->pc = 0x4E2734u;
            goto label_4e2734;
        }
    }
    ctx->pc = 0x4E2700u;
    // 0x4e2700: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e2700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e2704: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E2704u;
    {
        const bool branch_taken_0x4e2704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2704) {
            ctx->pc = 0x4E2708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2704u;
            // 0x4e2708: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2724u;
            goto label_4e2724;
        }
    }
    ctx->pc = 0x4E270Cu;
    // 0x4e270c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2710: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e2714: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2718: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E2718u;
    {
        const bool branch_taken_0x4e2718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2718) {
            ctx->pc = 0x4E2850u;
            goto label_4e2850;
        }
    }
    ctx->pc = 0x4E2720u;
    // 0x4e2720: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e2720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e2724:
    // 0x4e2724: 0xc138960  jal         func_4E2580
    ctx->pc = 0x4E2724u;
    SET_GPR_U32(ctx, 31, 0x4E272Cu);
    ctx->pc = 0x4E2728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2724u;
    // 0x4e2728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2580u, 0x4E2724u, 0x4E272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E272Cu;
label_4e272c:
    // 0x4e272c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E272Cu;
    {
        const bool branch_taken_0x4e272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E272Cu;
        // 0x4e2730: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e272c) {
            ctx->pc = 0x4E286Cu;
            goto label_4e286c;
        }
    }
    ctx->pc = 0x4E2734u;
label_4e2734:
    // 0x4e2734: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E2734u;
    {
        const bool branch_taken_0x4e2734 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2734) {
            ctx->pc = 0x4E2738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2734u;
            // 0x4e2738: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2768u;
            goto label_4e2768;
        }
    }
    ctx->pc = 0x4E273Cu;
    // 0x4e273c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e273cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e2740: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2744: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e2748: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e274c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E274Cu;
    {
        const bool branch_taken_0x4e274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E274Cu;
        // 0x4e2750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e274c) {
            ctx->pc = 0x4E283Cu;
            goto label_4e283c;
        }
    }
    ctx->pc = 0x4E2754u;
    // 0x4e2754: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e2754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2758: 0xc138960  jal         func_4E2580
    ctx->pc = 0x4E2758u;
    SET_GPR_U32(ctx, 31, 0x4E2760u);
    ctx->pc = 0x4E275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2758u;
    // 0x4e275c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2580u, 0x4E2758u, 0x4E2760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2760u;
label_4e2760:
    // 0x4e2760: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E2760u;
    {
        const bool branch_taken_0x4e2760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2760u;
        // 0x4e2764: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2760) {
            ctx->pc = 0x4E286Cu;
            goto label_4e286c;
        }
    }
    ctx->pc = 0x4E2768u;
label_4e2768:
    // 0x4e2768: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e276c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E276Cu;
    {
        const bool branch_taken_0x4e276c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E276Cu;
        // 0x4e2770: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e276c) {
            ctx->pc = 0x4E2790u;
            goto label_4e2790;
        }
    }
    ctx->pc = 0x4E2774u;
    // 0x4e2774: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e2774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e2778: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e2778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e277c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E277Cu;
    {
        const bool branch_taken_0x4e277c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e277c) {
            ctx->pc = 0x4E2780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E277Cu;
            // 0x4e2780: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2794u;
            goto label_4e2794;
        }
    }
    ctx->pc = 0x4E2784u;
    // 0x4e2784: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e2788: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E2788u;
    {
        const bool branch_taken_0x4e2788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2788u;
        // 0x4e278c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2788) {
            ctx->pc = 0x4E2800u;
            goto label_4e2800;
        }
    }
    ctx->pc = 0x4E2790u;
label_4e2790:
    // 0x4e2790: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e2794:
    // 0x4e2794: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e2798: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E2798u;
    {
        const bool branch_taken_0x4e2798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2798) {
            ctx->pc = 0x4E279Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2798u;
            // 0x4e279c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E27D8u;
            goto label_4e27d8;
        }
    }
    ctx->pc = 0x4E27A0u;
    // 0x4e27a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e27a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e27a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e27a8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E27A8u;
    {
        const bool branch_taken_0x4e27a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e27a8) {
            ctx->pc = 0x4E27ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E27A8u;
            // 0x4e27ac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2800u;
            goto label_4e2800;
        }
    }
    ctx->pc = 0x4E27B0u;
    // 0x4e27b0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e27b4: 0x0  nop
    ctx->pc = 0x4e27b4u;
    // NOP
label_4e27b8:
    // 0x4e27b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e27bc: 0x0  nop
    ctx->pc = 0x4e27bcu;
    // NOP
    // 0x4e27c0: 0x0  nop
    ctx->pc = 0x4e27c0u;
    // NOP
    // 0x4e27c4: 0x0  nop
    ctx->pc = 0x4e27c4u;
    // NOP
    // 0x4e27c8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E27C8u;
    {
        const bool branch_taken_0x4e27c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e27c8) {
            ctx->pc = 0x4E27CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E27C8u;
            // 0x4e27cc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E27B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e27b8;
        }
    }
    ctx->pc = 0x4E27D0u;
    // 0x4e27d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E27D0u;
    {
        const bool branch_taken_0x4e27d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E27D0u;
        // 0x4e27d4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e27d0) {
            ctx->pc = 0x4E2800u;
            goto label_4e2800;
        }
    }
    ctx->pc = 0x4E27D8u;
label_4e27d8:
    // 0x4e27d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e27dc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E27DCu;
    {
        const bool branch_taken_0x4e27dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E27DCu;
        // 0x4e27e0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e27dc) {
            ctx->pc = 0x4E2800u;
            goto label_4e2800;
        }
    }
    ctx->pc = 0x4E27E4u;
    // 0x4e27e4: 0x0  nop
    ctx->pc = 0x4e27e4u;
    // NOP
label_4e27e8:
    // 0x4e27e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e27ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e27f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e27f4: 0x0  nop
    ctx->pc = 0x4e27f4u;
    // NOP
    // 0x4e27f8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E27F8u;
    {
        const bool branch_taken_0x4e27f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E27F8u;
        // 0x4e27fc: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e27f8) {
            ctx->pc = 0x4E27E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e27e8;
        }
    }
    ctx->pc = 0x4E2800u;
label_4e2800:
    // 0x4e2800: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e2800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2804: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e2804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2808: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e2808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e280c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e280cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e2810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E2810u;
    {
        const bool branch_taken_0x4e2810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2810u;
        // 0x4e2814: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2810) {
            ctx->pc = 0x4E2824u;
            goto label_4e2824;
        }
    }
    ctx->pc = 0x4E2818u;
    // 0x4e2818: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e281c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e2820: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e2820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e2824:
    // 0x4e2824: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E2824u;
    {
        const bool branch_taken_0x4e2824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2824u;
        // 0x4e2828: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2824) {
            ctx->pc = 0x4E2860u;
            goto label_4e2860;
        }
    }
    ctx->pc = 0x4E282Cu;
    // 0x4e282c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e2830: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E2830u;
    {
        const bool branch_taken_0x4e2830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2830) {
            ctx->pc = 0x4E2834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2830u;
            // 0x4e2834: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E284Cu;
            goto label_4e284c;
        }
    }
    ctx->pc = 0x4E2838u;
    // 0x4e2838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e283c:
    // 0x4e283c: 0xc13886c  jal         func_4E21B0
    ctx->pc = 0x4E283Cu;
    SET_GPR_U32(ctx, 31, 0x4E2844u);
    ctx->pc = 0x4E2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E283Cu;
    // 0x4e2840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E21B0u, 0x4E283Cu, 0x4E2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2844u;
label_4e2844:
    // 0x4e2844: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E2844u;
    {
        const bool branch_taken_0x4e2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2844u;
        // 0x4e2848: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2844) {
            ctx->pc = 0x4E2874u;
            goto label_4e2874;
        }
    }
    ctx->pc = 0x4E284Cu;
label_4e284c:
    // 0x4e284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2850:
    // 0x4e2850: 0xc13886c  jal         func_4E21B0
    ctx->pc = 0x4E2850u;
    SET_GPR_U32(ctx, 31, 0x4E2858u);
    ctx->pc = 0x4E2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2850u;
    // 0x4e2854: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E21B0u, 0x4E2850u, 0x4E2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2858u;
label_4e2858:
    // 0x4e2858: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E2858u;
    {
        const bool branch_taken_0x4e2858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2858u;
        // 0x4e285c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2858) {
            ctx->pc = 0x4E2874u;
            goto label_4e2874;
        }
    }
    ctx->pc = 0x4E2860u;
label_4e2860:
    // 0x4e2860: 0xc138960  jal         func_4E2580
    ctx->pc = 0x4E2860u;
    SET_GPR_U32(ctx, 31, 0x4E2868u);
    ctx->pc = 0x4E2864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2860u;
    // 0x4e2864: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2580u, 0x4E2860u, 0x4E2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2868u;
label_4e2868:
    // 0x4e2868: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e286c:
    // 0x4e286c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e286cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e2870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e2870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2874:
    // 0x4e2874: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e2874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e2878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e287c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E287Cu;
        // 0x4e2880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E287Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2884u;
    // 0x4e2884: 0x0  nop
    ctx->pc = 0x4e2884u;
    // NOP
    ctx->pc = 0x4e2888u;
}
