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

// Function: sub_001116A8
// Address: 0x1116a8 - 0x1118a0
void sub_001116A8_0x1116a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001116A8_0x1116a8");
#endif

    switch (ctx->pc) {
        case 0x1116dcu: goto label_1116dc;
        case 0x1116e4u: goto label_1116e4;
        case 0x111714u: goto label_111714;
        case 0x111750u: goto label_111750;
        case 0x111780u: goto label_111780;
        case 0x1117b0u: goto label_1117b0;
        case 0x1117e0u: goto label_1117e0;
        case 0x111810u: goto label_111810;
        case 0x111840u: goto label_111840;
        case 0x111870u: goto label_111870;
        default: break;
    }

    ctx->pc = 0x1116a8u;

    // 0x1116a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1116a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1116ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1116acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1116b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1116b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1116b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1116b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1116b8: 0x14a20073  bne         $a1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1116B8u;
    {
        const bool branch_taken_0x1116b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116B8u;
        // 0x1116bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116b8) {
            ctx->pc = 0x111888u;
            goto label_111888;
        }
    }
    ctx->pc = 0x1116C0u;
    // 0x1116c0: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1116C0u;
    {
        const bool branch_taken_0x1116c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116C0u;
        // 0x1116c4: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116c0) {
            ctx->pc = 0x111888u;
            goto label_111888;
        }
    }
    ctx->pc = 0x1116C8u;
    // 0x1116c8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1116cc: 0x26108aa0  addiu       $s0, $s0, -0x7560
    ctx->pc = 0x1116ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937248));
    // 0x1116d0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1116d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1116d4: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x1116D4u;
    SET_GPR_U32(ctx, 31, 0x1116DCu);
    ctx->pc = 0x1116D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116D4u;
    // 0x1116d8: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D758u, 0x1116D4u, 0x1116DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116DCu;
label_1116dc:
    // 0x1116dc: 0xc045078  jal         func_1141E0
    ctx->pc = 0x1116DCu;
    SET_GPR_U32(ctx, 31, 0x1116E4u);
    ctx->pc = 0x1116E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116DCu;
    // 0x1116e0: 0x260401e0  addiu       $a0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141E0u, 0x1116DCu, 0x1116E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116E4u;
label_1116e4:
    // 0x1116e4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1116e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1116e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1116ec: 0x34634268  ori         $v1, $v1, 0x4268
    ctx->pc = 0x1116ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17000);
    // 0x1116f0: 0x34424274  ori         $v0, $v0, 0x4274
    ctx->pc = 0x1116f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17012);
    // 0x1116f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1116f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1116f8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1116f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1116fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1116fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x111700: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x111700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x111704: 0x34844280  ori         $a0, $a0, 0x4280
    ctx->pc = 0x111704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17024);
    // 0x111708: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x111708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x11170c: 0xc042f6c  jal         func_10BDB0
    ctx->pc = 0x11170Cu;
    SET_GPR_U32(ctx, 31, 0x111714u);
    ctx->pc = 0x111710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11170Cu;
    // 0x111710: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BDB0u, 0x11170Cu, 0x111714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111714u;
label_111714:
    // 0x111714: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x111714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x111718: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x111718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x11171c: 0x3442fa30  ori         $v0, $v0, 0xFA30
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64048);
    // 0x111720: 0x3484fa2c  ori         $a0, $a0, 0xFA2C
    ctx->pc = 0x111720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64044);
    // 0x111724: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x111724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x111728: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x111728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x11172c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x11172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x111730: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x111730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x111734: 0x3463fa60  ori         $v1, $v1, 0xFA60
    ctx->pc = 0x111734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64096);
    // 0x111738: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11173c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x11173cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x111740: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x111740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x111744: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x111744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111748: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11174c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_111750:
    // 0x111750: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x111750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x111754: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x111758: 0x0  nop
    ctx->pc = 0x111758u;
    // NOP
    // 0x11175c: 0x0  nop
    ctx->pc = 0x11175cu;
    // NOP
    // 0x111760: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111760u;
    {
        const bool branch_taken_0x111760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x111764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111760u;
        // 0x111764: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111760) {
            ctx->pc = 0x111750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111750;
        }
    }
    ctx->pc = 0x111768u;
    // 0x111768: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11176c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x111770: 0x24428560  addiu       $v0, $v0, -0x7AA0
    ctx->pc = 0x111770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
    // 0x111774: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x111774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x111778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11177c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_111780:
    // 0x111780: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x111784: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x111784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111788: 0x0  nop
    ctx->pc = 0x111788u;
    // NOP
    // 0x11178c: 0x0  nop
    ctx->pc = 0x11178cu;
    // NOP
    // 0x111790: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111790u;
    {
        const bool branch_taken_0x111790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x111794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111790u;
        // 0x111794: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111790) {
            ctx->pc = 0x111780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111780;
        }
    }
    ctx->pc = 0x111798u;
    // 0x111798: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x111798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11179c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1117a0: 0x24428570  addiu       $v0, $v0, -0x7A90
    ctx->pc = 0x1117a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935920));
    // 0x1117a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1117a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1117a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1117ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1117acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1117b0:
    // 0x1117b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1117b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1117b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1117b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1117b8: 0x0  nop
    ctx->pc = 0x1117b8u;
    // NOP
    // 0x1117bc: 0x0  nop
    ctx->pc = 0x1117bcu;
    // NOP
    // 0x1117c0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1117C0u;
    {
        const bool branch_taken_0x1117c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1117C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C0u;
        // 0x1117c4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c0) {
            ctx->pc = 0x1117B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1117b0;
        }
    }
    ctx->pc = 0x1117C8u;
    // 0x1117c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1117c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1117cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1117ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1117d0: 0x24428580  addiu       $v0, $v0, -0x7A80
    ctx->pc = 0x1117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935936));
    // 0x1117d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1117d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1117d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1117d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1117dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1117dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1117e0:
    // 0x1117e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1117e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1117e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1117e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1117e8: 0x0  nop
    ctx->pc = 0x1117e8u;
    // NOP
    // 0x1117ec: 0x0  nop
    ctx->pc = 0x1117ecu;
    // NOP
    // 0x1117f0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1117F0u;
    {
        const bool branch_taken_0x1117f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117F0u;
        // 0x1117f4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117f0) {
            ctx->pc = 0x1117E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1117e0;
        }
    }
    ctx->pc = 0x1117F8u;
    // 0x1117f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1117fc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x111800: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x111804: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x111804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111808: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x111808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11180c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_111810:
    // 0x111810: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x111814: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x111814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111818: 0x0  nop
    ctx->pc = 0x111818u;
    // NOP
    // 0x11181c: 0x0  nop
    ctx->pc = 0x11181cu;
    // NOP
    // 0x111820: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111820u;
    {
        const bool branch_taken_0x111820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x111824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111820u;
        // 0x111824: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111820) {
            ctx->pc = 0x111810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111810;
        }
    }
    ctx->pc = 0x111828u;
    // 0x111828: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11182c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x111830: 0x244285a0  addiu       $v0, $v0, -0x7A60
    ctx->pc = 0x111830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935968));
    // 0x111834: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x111834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x111838: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x111838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11183c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_111840:
    // 0x111840: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x111844: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x111844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111848: 0x0  nop
    ctx->pc = 0x111848u;
    // NOP
    // 0x11184c: 0x0  nop
    ctx->pc = 0x11184cu;
    // NOP
    // 0x111850: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111850u;
    {
        const bool branch_taken_0x111850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x111854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111850u;
        // 0x111854: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111850) {
            ctx->pc = 0x111840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111840;
        }
    }
    ctx->pc = 0x111858u;
    // 0x111858: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x111858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11185c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x111860: 0x244285c8  addiu       $v0, $v0, -0x7A38
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936008));
    // 0x111864: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x111864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x111868: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x111868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11186c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_111870:
    // 0x111870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x111874: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111878: 0x0  nop
    ctx->pc = 0x111878u;
    // NOP
    // 0x11187c: 0x0  nop
    ctx->pc = 0x11187cu;
    // NOP
    // 0x111880: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111880u;
    {
        const bool branch_taken_0x111880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x111884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111880u;
        // 0x111884: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111880) {
            ctx->pc = 0x111870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111870;
        }
    }
    ctx->pc = 0x111888u;
label_111888:
    // 0x111888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x111888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11188c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11188cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111894: 0x3e00008  jr          $ra
    ctx->pc = 0x111894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111894u;
        // 0x111898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11189Cu;
    // 0x11189c: 0x0  nop
    ctx->pc = 0x11189cu;
    // NOP
    ctx->pc = 0x1118a0u;
}
