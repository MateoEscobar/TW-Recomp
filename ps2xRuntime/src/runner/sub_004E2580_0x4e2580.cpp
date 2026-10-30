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

// Function: sub_004E2580
// Address: 0x4e2580 - 0x4e26d8
void sub_004E2580_0x4e2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2580_0x4e2580");
#endif

    switch (ctx->pc) {
        case 0x4e25b0u: goto label_4e25b0;
        case 0x4e25ecu: goto label_4e25ec;
        case 0x4e2640u: goto label_4e2640;
        case 0x4e2670u: goto label_4e2670;
        case 0x4e26a8u: goto label_4e26a8;
        default: break;
    }

    ctx->pc = 0x4e2580u;

    // 0x4e2580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e2580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e2584: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e2584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2588: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e2588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e258c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2590: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e2590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e2594: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e2594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2598: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e2598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e259c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E259Cu;
    {
        const bool branch_taken_0x4e259c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E259Cu;
        // 0x4e25a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e259c) {
            ctx->pc = 0x4E25CCu;
            goto label_4e25cc;
        }
    }
    ctx->pc = 0x4E25A4u;
    // 0x4e25a4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e25a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e25a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e25ac: 0x0  nop
    ctx->pc = 0x4e25acu;
    // NOP
label_4e25b0:
    // 0x4e25b0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e25b4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e25b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e25b8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E25B8u;
    {
        const bool branch_taken_0x4e25b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e25b8) {
            ctx->pc = 0x4E25BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E25B8u;
            // 0x4e25bc: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E25C4u;
            goto label_4e25c4;
        }
    }
    ctx->pc = 0x4E25C0u;
    // 0x4e25c0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e25c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e25c4:
    // 0x4e25c4: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E25C4u;
    {
        const bool branch_taken_0x4e25c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e25c4) {
            ctx->pc = 0x4E25C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E25C4u;
            // 0x4e25c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E25B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e25b0;
        }
    }
    ctx->pc = 0x4E25CCu;
label_4e25cc:
    // 0x4e25cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E25CCu;
    {
        const bool branch_taken_0x4e25cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E25CCu;
        // 0x4e25d0: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e25cc) {
            ctx->pc = 0x4E2688u;
            goto label_4e2688;
        }
    }
    ctx->pc = 0x4E25D4u;
    // 0x4e25d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e25d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e25dc: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E25DCu;
    {
        const bool branch_taken_0x4e25dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E25DCu;
        // 0x4e25e0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e25dc) {
            ctx->pc = 0x4E25F4u;
            goto label_4e25f4;
        }
    }
    ctx->pc = 0x4E25E4u;
    // 0x4e25e4: 0xc13886c  jal         func_4E21B0
    ctx->pc = 0x4E25E4u;
    SET_GPR_U32(ctx, 31, 0x4E25ECu);
    ctx->pc = 0x4E25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E25E4u;
    // 0x4e25e8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E21B0u, 0x4E25E4u, 0x4E25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E25ECu;
label_4e25ec:
    // 0x4e25ec: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E25ECu;
    {
        const bool branch_taken_0x4e25ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E25ECu;
        // 0x4e25f0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e25ec) {
            ctx->pc = 0x4E26ACu;
            goto label_4e26ac;
        }
    }
    ctx->pc = 0x4E25F4u;
label_4e25f4:
    // 0x4e25f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e25f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E25F8u;
    {
        const bool branch_taken_0x4e25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E25F8u;
        // 0x4e25fc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e25f8) {
            ctx->pc = 0x4E261Cu;
            goto label_4e261c;
        }
    }
    ctx->pc = 0x4E2600u;
    // 0x4e2600: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e2604: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e2604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e2608: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2608u;
    {
        const bool branch_taken_0x4e2608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e2608) {
            ctx->pc = 0x4E260Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2608u;
            // 0x4e260c: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2620u;
            goto label_4e2620;
        }
    }
    ctx->pc = 0x4E2610u;
    // 0x4e2610: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e2614: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E2614u;
    {
        const bool branch_taken_0x4e2614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2614u;
        // 0x4e2618: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2614) {
            ctx->pc = 0x4E2688u;
            goto label_4e2688;
        }
    }
    ctx->pc = 0x4E261Cu;
label_4e261c:
    // 0x4e261c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e2620:
    // 0x4e2620: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e2624: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E2624u;
    {
        const bool branch_taken_0x4e2624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2624) {
            ctx->pc = 0x4E2628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2624u;
            // 0x4e2628: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2660u;
            goto label_4e2660;
        }
    }
    ctx->pc = 0x4E262Cu;
    // 0x4e262c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e262cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2630: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2634: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E2634u;
    {
        const bool branch_taken_0x4e2634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2634) {
            ctx->pc = 0x4E2638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2634u;
            // 0x4e2638: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2688u;
            goto label_4e2688;
        }
    }
    ctx->pc = 0x4E263Cu;
    // 0x4e263c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e2640:
    // 0x4e2640: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2644: 0x0  nop
    ctx->pc = 0x4e2644u;
    // NOP
    // 0x4e2648: 0x0  nop
    ctx->pc = 0x4e2648u;
    // NOP
    // 0x4e264c: 0x0  nop
    ctx->pc = 0x4e264cu;
    // NOP
    // 0x4e2650: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E2650u;
    {
        const bool branch_taken_0x4e2650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2650) {
            ctx->pc = 0x4E2654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2650u;
            // 0x4e2654: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2640;
        }
    }
    ctx->pc = 0x4E2658u;
    // 0x4e2658: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E2658u;
    {
        const bool branch_taken_0x4e2658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2658u;
        // 0x4e265c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2658) {
            ctx->pc = 0x4E2688u;
            goto label_4e2688;
        }
    }
    ctx->pc = 0x4E2660u;
label_4e2660:
    // 0x4e2660: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e2664: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2664u;
    {
        const bool branch_taken_0x4e2664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2664u;
        // 0x4e2668: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2664) {
            ctx->pc = 0x4E2688u;
            goto label_4e2688;
        }
    }
    ctx->pc = 0x4E266Cu;
    // 0x4e266c: 0x0  nop
    ctx->pc = 0x4e266cu;
    // NOP
label_4e2670:
    // 0x4e2670: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e2670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e2674: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e2674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2678: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e267c: 0x0  nop
    ctx->pc = 0x4e267cu;
    // NOP
    // 0x4e2680: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E2680u;
    {
        const bool branch_taken_0x4e2680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2680u;
        // 0x4e2684: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2680) {
            ctx->pc = 0x4E2670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2670;
        }
    }
    ctx->pc = 0x4E2688u;
label_4e2688:
    // 0x4e2688: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e2688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e268c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2690: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e2690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e2694: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2698: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2698u;
    {
        const bool branch_taken_0x4e2698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2698) {
            ctx->pc = 0x4E269Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2698u;
            // 0x4e269c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E26BCu;
            goto label_4e26bc;
        }
    }
    ctx->pc = 0x4E26A0u;
    // 0x4e26a0: 0xc13886c  jal         func_4E21B0
    ctx->pc = 0x4E26A0u;
    SET_GPR_U32(ctx, 31, 0x4E26A8u);
    ctx->pc = 0x4E26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E26A0u;
    // 0x4e26a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E21B0u, 0x4E26A0u, 0x4E26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E26A8u;
label_4e26a8:
    // 0x4e26a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e26ac:
    // 0x4e26ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e26b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e26b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E26B4u;
    {
        const bool branch_taken_0x4e26b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E26B4u;
        // 0x4e26b8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e26b4) {
            ctx->pc = 0x4E26C0u;
            goto label_4e26c0;
        }
    }
    ctx->pc = 0x4E26BCu;
label_4e26bc:
    // 0x4e26bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e26c0:
    // 0x4e26c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e26c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e26c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e26c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e26c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e26c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e26cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E26CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E26CCu;
        // 0x4e26d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E26CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E26D4u;
    // 0x4e26d4: 0x0  nop
    ctx->pc = 0x4e26d4u;
    // NOP
    ctx->pc = 0x4e26d8u;
}
