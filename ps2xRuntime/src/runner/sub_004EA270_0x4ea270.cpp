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

// Function: sub_004EA270
// Address: 0x4ea270 - 0x4ea3c8
void sub_004EA270_0x4ea270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA270_0x4ea270");
#endif

    switch (ctx->pc) {
        case 0x4ea2a0u: goto label_4ea2a0;
        case 0x4ea2dcu: goto label_4ea2dc;
        case 0x4ea330u: goto label_4ea330;
        case 0x4ea360u: goto label_4ea360;
        case 0x4ea398u: goto label_4ea398;
        default: break;
    }

    ctx->pc = 0x4ea270u;

    // 0x4ea270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ea270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ea274: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4ea274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea278: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4ea278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4ea27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ea27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ea280: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ea280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ea284: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4ea284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4ea288: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4ea288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ea28c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4EA28Cu;
    {
        const bool branch_taken_0x4ea28c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA28Cu;
        // 0x4ea290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea28c) {
            ctx->pc = 0x4EA2BCu;
            goto label_4ea2bc;
        }
    }
    ctx->pc = 0x4EA294u;
    // 0x4ea294: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ea294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea298: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4ea298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea29c: 0x0  nop
    ctx->pc = 0x4ea29cu;
    // NOP
label_4ea2a0:
    // 0x4ea2a0: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x4ea2a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4ea2a4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4ea2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ea2a8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4EA2A8u;
    {
        const bool branch_taken_0x4ea2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea2a8) {
            ctx->pc = 0x4EA2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA2A8u;
            // 0x4ea2ac: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA2B4u;
            goto label_4ea2b4;
        }
    }
    ctx->pc = 0x4EA2B0u;
    // 0x4ea2b0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4ea2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4ea2b4:
    // 0x4ea2b4: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4EA2B4u;
    {
        const bool branch_taken_0x4ea2b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea2b4) {
            ctx->pc = 0x4EA2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA2B4u;
            // 0x4ea2b8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea2a0;
        }
    }
    ctx->pc = 0x4EA2BCu;
label_4ea2bc:
    // 0x4ea2bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4EA2BCu;
    {
        const bool branch_taken_0x4ea2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA2BCu;
        // 0x4ea2c0: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea2bc) {
            ctx->pc = 0x4EA378u;
            goto label_4ea378;
        }
    }
    ctx->pc = 0x4EA2C4u;
    // 0x4ea2c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4ea2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4ea2c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4ea2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ea2cc: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EA2CCu;
    {
        const bool branch_taken_0x4ea2cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4EA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA2CCu;
        // 0x4ea2d0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea2cc) {
            ctx->pc = 0x4EA2E4u;
            goto label_4ea2e4;
        }
    }
    ctx->pc = 0x4EA2D4u;
    // 0x4ea2d4: 0xc13a7a8  jal         func_4E9EA0
    ctx->pc = 0x4EA2D4u;
    SET_GPR_U32(ctx, 31, 0x4EA2DCu);
    ctx->pc = 0x4EA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA2D4u;
    // 0x4ea2d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9EA0u, 0x4EA2D4u, 0x4EA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA2DCu;
label_4ea2dc:
    // 0x4ea2dc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4EA2DCu;
    {
        const bool branch_taken_0x4ea2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA2DCu;
        // 0x4ea2e0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea2dc) {
            ctx->pc = 0x4EA39Cu;
            goto label_4ea39c;
        }
    }
    ctx->pc = 0x4EA2E4u;
label_4ea2e4:
    // 0x4ea2e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ea2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea2e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EA2E8u;
    {
        const bool branch_taken_0x4ea2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA2E8u;
        // 0x4ea2ec: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea2e8) {
            ctx->pc = 0x4EA30Cu;
            goto label_4ea30c;
        }
    }
    ctx->pc = 0x4EA2F0u;
    // 0x4ea2f0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4ea2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ea2f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4ea2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ea2f8: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EA2F8u;
    {
        const bool branch_taken_0x4ea2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4ea2f8) {
            ctx->pc = 0x4EA2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA2F8u;
            // 0x4ea2fc: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA310u;
            goto label_4ea310;
        }
    }
    ctx->pc = 0x4EA300u;
    // 0x4ea300: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4ea300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4ea304: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4EA304u;
    {
        const bool branch_taken_0x4ea304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA304u;
        // 0x4ea308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea304) {
            ctx->pc = 0x4EA378u;
            goto label_4ea378;
        }
    }
    ctx->pc = 0x4EA30Cu;
label_4ea30c:
    // 0x4ea30c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ea30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4ea310:
    // 0x4ea310: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ea314: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4EA314u;
    {
        const bool branch_taken_0x4ea314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea314) {
            ctx->pc = 0x4EA318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA314u;
            // 0x4ea318: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA350u;
            goto label_4ea350;
        }
    }
    ctx->pc = 0x4EA31Cu;
    // 0x4ea31c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ea31cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea320: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4ea320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ea324: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4EA324u;
    {
        const bool branch_taken_0x4ea324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea324) {
            ctx->pc = 0x4EA328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA324u;
            // 0x4ea328: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA378u;
            goto label_4ea378;
        }
    }
    ctx->pc = 0x4EA32Cu;
    // 0x4ea32c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4ea32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4ea330:
    // 0x4ea330: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4ea330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ea334: 0x0  nop
    ctx->pc = 0x4ea334u;
    // NOP
    // 0x4ea338: 0x0  nop
    ctx->pc = 0x4ea338u;
    // NOP
    // 0x4ea33c: 0x0  nop
    ctx->pc = 0x4ea33cu;
    // NOP
    // 0x4ea340: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EA340u;
    {
        const bool branch_taken_0x4ea340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea340) {
            ctx->pc = 0x4EA344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA340u;
            // 0x4ea344: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea330;
        }
    }
    ctx->pc = 0x4EA348u;
    // 0x4ea348: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4EA348u;
    {
        const bool branch_taken_0x4ea348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA348u;
        // 0x4ea34c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea348) {
            ctx->pc = 0x4EA378u;
            goto label_4ea378;
        }
    }
    ctx->pc = 0x4EA350u;
label_4ea350:
    // 0x4ea350: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ea350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ea354: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EA354u;
    {
        const bool branch_taken_0x4ea354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4EA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA354u;
        // 0x4ea358: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea354) {
            ctx->pc = 0x4EA378u;
            goto label_4ea378;
        }
    }
    ctx->pc = 0x4EA35Cu;
    // 0x4ea35c: 0x0  nop
    ctx->pc = 0x4ea35cu;
    // NOP
label_4ea360:
    // 0x4ea360: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ea360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ea364: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ea364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ea368: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ea368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ea36c: 0x0  nop
    ctx->pc = 0x4ea36cu;
    // NOP
    // 0x4ea370: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EA370u;
    {
        const bool branch_taken_0x4ea370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA370u;
        // 0x4ea374: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea370) {
            ctx->pc = 0x4EA360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea360;
        }
    }
    ctx->pc = 0x4EA378u;
label_4ea378:
    // 0x4ea378: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ea378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea37c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ea37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea380: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x4ea380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4ea384: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ea384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ea388: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EA388u;
    {
        const bool branch_taken_0x4ea388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea388) {
            ctx->pc = 0x4EA38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA388u;
            // 0x4ea38c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA3ACu;
            goto label_4ea3ac;
        }
    }
    ctx->pc = 0x4EA390u;
    // 0x4ea390: 0xc13a7a8  jal         func_4E9EA0
    ctx->pc = 0x4EA390u;
    SET_GPR_U32(ctx, 31, 0x4EA398u);
    ctx->pc = 0x4EA394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA390u;
    // 0x4ea394: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9EA0u, 0x4EA390u, 0x4EA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA398u;
label_4ea398:
    // 0x4ea398: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4ea398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea39c:
    // 0x4ea39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ea39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ea3a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4ea3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4ea3a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4EA3A4u;
    {
        const bool branch_taken_0x4ea3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA3A4u;
        // 0x4ea3a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea3a4) {
            ctx->pc = 0x4EA3B0u;
            goto label_4ea3b0;
        }
    }
    ctx->pc = 0x4EA3ACu;
label_4ea3ac:
    // 0x4ea3ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4ea3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4ea3b0:
    // 0x4ea3b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ea3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea3b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ea3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ea3b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4ea3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ea3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EA3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA3BCu;
        // 0x4ea3c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA3C4u;
    // 0x4ea3c4: 0x0  nop
    ctx->pc = 0x4ea3c4u;
    // NOP
    ctx->pc = 0x4ea3c8u;
}
