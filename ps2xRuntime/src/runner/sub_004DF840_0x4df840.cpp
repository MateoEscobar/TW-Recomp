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

// Function: sub_004DF840
// Address: 0x4df840 - 0x4df998
void sub_004DF840_0x4df840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF840_0x4df840");
#endif

    switch (ctx->pc) {
        case 0x4df870u: goto label_4df870;
        case 0x4df8acu: goto label_4df8ac;
        case 0x4df900u: goto label_4df900;
        case 0x4df930u: goto label_4df930;
        case 0x4df968u: goto label_4df968;
        default: break;
    }

    ctx->pc = 0x4df840u;

    // 0x4df840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4df840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4df844: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4df844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df848: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4df848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4df84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4df84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4df850: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4df850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4df854: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4df854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df858: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4df858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4df85c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4DF85Cu;
    {
        const bool branch_taken_0x4df85c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF85Cu;
        // 0x4df860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df85c) {
            ctx->pc = 0x4DF88Cu;
            goto label_4df88c;
        }
    }
    ctx->pc = 0x4DF864u;
    // 0x4df864: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4df864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4df868: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4df868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df86c: 0x0  nop
    ctx->pc = 0x4df86cu;
    // NOP
label_4df870:
    // 0x4df870: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4df870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4df874: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4df874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4df878: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DF878u;
    {
        const bool branch_taken_0x4df878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df878) {
            ctx->pc = 0x4DF87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF878u;
            // 0x4df87c: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF884u;
            goto label_4df884;
        }
    }
    ctx->pc = 0x4DF880u;
    // 0x4df880: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4df880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4df884:
    // 0x4df884: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DF884u;
    {
        const bool branch_taken_0x4df884 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df884) {
            ctx->pc = 0x4DF888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF884u;
            // 0x4df888: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df870;
        }
    }
    ctx->pc = 0x4DF88Cu;
label_4df88c:
    // 0x4df88c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4DF88Cu;
    {
        const bool branch_taken_0x4df88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF88Cu;
        // 0x4df890: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df88c) {
            ctx->pc = 0x4DF948u;
            goto label_4df948;
        }
    }
    ctx->pc = 0x4DF894u;
    // 0x4df894: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4df894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df898: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4df898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4df89c: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DF89Cu;
    {
        const bool branch_taken_0x4df89c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4DF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF89Cu;
        // 0x4df8a0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df89c) {
            ctx->pc = 0x4DF8B4u;
            goto label_4df8b4;
        }
    }
    ctx->pc = 0x4DF8A4u;
    // 0x4df8a4: 0xc137d1c  jal         func_4DF470
    ctx->pc = 0x4DF8A4u;
    SET_GPR_U32(ctx, 31, 0x4DF8ACu);
    ctx->pc = 0x4DF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF8A4u;
    // 0x4df8a8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF470u, 0x4DF8A4u, 0x4DF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF8ACu;
label_4df8ac:
    // 0x4df8ac: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4DF8ACu;
    {
        const bool branch_taken_0x4df8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF8ACu;
        // 0x4df8b0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df8ac) {
            ctx->pc = 0x4DF96Cu;
            goto label_4df96c;
        }
    }
    ctx->pc = 0x4DF8B4u;
label_4df8b4:
    // 0x4df8b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4df8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4df8b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DF8B8u;
    {
        const bool branch_taken_0x4df8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF8B8u;
        // 0x4df8bc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df8b8) {
            ctx->pc = 0x4DF8DCu;
            goto label_4df8dc;
        }
    }
    ctx->pc = 0x4DF8C0u;
    // 0x4df8c0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4df8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4df8c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4df8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4df8c8: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DF8C8u;
    {
        const bool branch_taken_0x4df8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4df8c8) {
            ctx->pc = 0x4DF8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF8C8u;
            // 0x4df8cc: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF8E0u;
            goto label_4df8e0;
        }
    }
    ctx->pc = 0x4DF8D0u;
    // 0x4df8d0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4df8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4df8d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4DF8D4u;
    {
        const bool branch_taken_0x4df8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF8D4u;
        // 0x4df8d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df8d4) {
            ctx->pc = 0x4DF948u;
            goto label_4df948;
        }
    }
    ctx->pc = 0x4DF8DCu;
label_4df8dc:
    // 0x4df8dc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4df8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4df8e0:
    // 0x4df8e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4df8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4df8e4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4DF8E4u;
    {
        const bool branch_taken_0x4df8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df8e4) {
            ctx->pc = 0x4DF8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF8E4u;
            // 0x4df8e8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF920u;
            goto label_4df920;
        }
    }
    ctx->pc = 0x4DF8ECu;
    // 0x4df8ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4df8ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df8f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4df8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4df8f4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4DF8F4u;
    {
        const bool branch_taken_0x4df8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df8f4) {
            ctx->pc = 0x4DF8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF8F4u;
            // 0x4df8f8: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF948u;
            goto label_4df948;
        }
    }
    ctx->pc = 0x4DF8FCu;
    // 0x4df8fc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4df8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4df900:
    // 0x4df900: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4df900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4df904: 0x0  nop
    ctx->pc = 0x4df904u;
    // NOP
    // 0x4df908: 0x0  nop
    ctx->pc = 0x4df908u;
    // NOP
    // 0x4df90c: 0x0  nop
    ctx->pc = 0x4df90cu;
    // NOP
    // 0x4df910: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4DF910u;
    {
        const bool branch_taken_0x4df910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df910) {
            ctx->pc = 0x4DF914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF910u;
            // 0x4df914: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df900;
        }
    }
    ctx->pc = 0x4DF918u;
    // 0x4df918: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4DF918u;
    {
        const bool branch_taken_0x4df918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF918u;
        // 0x4df91c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df918) {
            ctx->pc = 0x4DF948u;
            goto label_4df948;
        }
    }
    ctx->pc = 0x4DF920u;
label_4df920:
    // 0x4df920: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4df920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4df924: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DF924u;
    {
        const bool branch_taken_0x4df924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF924u;
        // 0x4df928: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df924) {
            ctx->pc = 0x4DF948u;
            goto label_4df948;
        }
    }
    ctx->pc = 0x4DF92Cu;
    // 0x4df92c: 0x0  nop
    ctx->pc = 0x4df92cu;
    // NOP
label_4df930:
    // 0x4df930: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4df930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4df934: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4df934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4df938: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4df938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4df93c: 0x0  nop
    ctx->pc = 0x4df93cu;
    // NOP
    // 0x4df940: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4DF940u;
    {
        const bool branch_taken_0x4df940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF940u;
        // 0x4df944: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df940) {
            ctx->pc = 0x4DF930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df930;
        }
    }
    ctx->pc = 0x4DF948u;
label_4df948:
    // 0x4df948: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4df948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df94c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4df94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4df950: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4df950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4df954: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4df954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4df958: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DF958u;
    {
        const bool branch_taken_0x4df958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df958) {
            ctx->pc = 0x4DF95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF958u;
            // 0x4df95c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF97Cu;
            goto label_4df97c;
        }
    }
    ctx->pc = 0x4DF960u;
    // 0x4df960: 0xc137d1c  jal         func_4DF470
    ctx->pc = 0x4DF960u;
    SET_GPR_U32(ctx, 31, 0x4DF968u);
    ctx->pc = 0x4DF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF960u;
    // 0x4df964: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF470u, 0x4DF960u, 0x4DF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF968u;
label_4df968:
    // 0x4df968: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4df968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4df96c:
    // 0x4df96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4df96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4df970: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4df970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4df974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4DF974u;
    {
        const bool branch_taken_0x4df974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF974u;
        // 0x4df978: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df974) {
            ctx->pc = 0x4DF980u;
            goto label_4df980;
        }
    }
    ctx->pc = 0x4DF97Cu;
label_4df97c:
    // 0x4df97c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4df97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4df980:
    // 0x4df980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4df980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df984: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4df984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4df988: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4df988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4df98c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF98Cu;
        // 0x4df990: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF994u;
    // 0x4df994: 0x0  nop
    ctx->pc = 0x4df994u;
    // NOP
    ctx->pc = 0x4df998u;
}
