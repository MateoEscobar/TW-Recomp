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

// Function: sub_001E6530
// Address: 0x1e6530 - 0x1e6600
void sub_001E6530_0x1e6530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6530_0x1e6530");
#endif

    switch (ctx->pc) {
        case 0x1e6530u: goto label_1e6530;
        case 0x1e6534u: goto label_1e6534;
        case 0x1e6538u: goto label_1e6538;
        case 0x1e653cu: goto label_1e653c;
        case 0x1e6540u: goto label_1e6540;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6548u: goto label_1e6548;
        case 0x1e654cu: goto label_1e654c;
        case 0x1e6550u: goto label_1e6550;
        case 0x1e6554u: goto label_1e6554;
        case 0x1e6558u: goto label_1e6558;
        case 0x1e655cu: goto label_1e655c;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6568u: goto label_1e6568;
        case 0x1e656cu: goto label_1e656c;
        case 0x1e6570u: goto label_1e6570;
        case 0x1e6574u: goto label_1e6574;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6580u: goto label_1e6580;
        case 0x1e6584u: goto label_1e6584;
        case 0x1e6588u: goto label_1e6588;
        case 0x1e658cu: goto label_1e658c;
        case 0x1e6590u: goto label_1e6590;
        case 0x1e6594u: goto label_1e6594;
        case 0x1e6598u: goto label_1e6598;
        case 0x1e659cu: goto label_1e659c;
        case 0x1e65a0u: goto label_1e65a0;
        case 0x1e65a4u: goto label_1e65a4;
        case 0x1e65a8u: goto label_1e65a8;
        case 0x1e65acu: goto label_1e65ac;
        case 0x1e65b0u: goto label_1e65b0;
        case 0x1e65b4u: goto label_1e65b4;
        case 0x1e65b8u: goto label_1e65b8;
        case 0x1e65bcu: goto label_1e65bc;
        case 0x1e65c0u: goto label_1e65c0;
        case 0x1e65c4u: goto label_1e65c4;
        case 0x1e65c8u: goto label_1e65c8;
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65d0u: goto label_1e65d0;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e65d8u: goto label_1e65d8;
        case 0x1e65dcu: goto label_1e65dc;
        case 0x1e65e0u: goto label_1e65e0;
        case 0x1e65e4u: goto label_1e65e4;
        case 0x1e65e8u: goto label_1e65e8;
        case 0x1e65ecu: goto label_1e65ec;
        case 0x1e65f0u: goto label_1e65f0;
        case 0x1e65f4u: goto label_1e65f4;
        case 0x1e65f8u: goto label_1e65f8;
        case 0x1e65fcu: goto label_1e65fc;
        default: break;
    }

    ctx->pc = 0x1e6530u;

label_1e6530:
    // 0x1e6530: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e6530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e6534:
    // 0x1e6534: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e6534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1e6538:
    // 0x1e6538: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e6538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1e653c:
    // 0x1e653c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1e6540:
    // 0x1e6540: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e6544:
    // 0x1e6544: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e6544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e6548:
    // 0x1e6548: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e6548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1e654c:
    // 0x1e654c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1e6550:
    // 0x1e6550: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1e6550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1e6554:
    // 0x1e6554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e6558:
    // 0x1e6558: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e6558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e655c:
    // 0x1e655c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e6560:
    if (ctx->pc == 0x1E6560u) {
        ctx->pc = 0x1E6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E655Cu;
        // 0x1e6560: 0x24900bb0  addiu       $s0, $a0, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6564u;
        goto label_1e6564;
    }
    ctx->pc = 0x1E655Cu;
    {
        const bool branch_taken_0x1e655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E655Cu;
        // 0x1e6560: 0x24900bb0  addiu       $s0, $a0, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e655c) {
            ctx->pc = 0x1E65D0u;
            goto label_1e65d0;
        }
    }
    ctx->pc = 0x1E6564u;
label_1e6564:
    // 0x1e6564: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e6564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6568:
    // 0x1e6568: 0x249307b0  addiu       $s3, $a0, 0x7B0
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
label_1e656c:
    // 0x1e656c: 0x249408b0  addiu       $s4, $a0, 0x8B0
    ctx->pc = 0x1e656cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 2224));
label_1e6570:
    // 0x1e6570: 0x249509b0  addiu       $s5, $a0, 0x9B0
    ctx->pc = 0x1e6570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 2480));
label_1e6574:
    // 0x1e6574: 0x24960ab0  addiu       $s6, $a0, 0xAB0
    ctx->pc = 0x1e6574u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 2736));
label_1e6578:
    // 0x1e6578: 0x24971b70  addiu       $s7, $a0, 0x1B70
    ctx->pc = 0x1e6578u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
label_1e657c:
    // 0x1e657c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e657cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6580:
    // 0x1e6580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6584:
    // 0x1e6584: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e6588:
    // 0x1e6588: 0x261003f0  addiu       $s0, $s0, 0x3F0
    ctx->pc = 0x1e6588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_1e658c:
    // 0x1e658c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e658cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e6590:
    // 0x1e6590: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e6590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e6594:
    // 0x1e6594: 0x40f809  jalr        $v0
label_1e6598:
    if (ctx->pc == 0x1E6598u) {
        ctx->pc = 0x1E6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6594u;
        // 0x1e6598: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E659Cu;
        goto label_1e659c;
    }
    ctx->pc = 0x1E6594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E659Cu);
        ctx->pc = 0x1E6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6594u;
        // 0x1e6598: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6594u, 0x1E659Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E659Cu;
label_1e659c:
    // 0x1e659c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1e659cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1e65a0:
    // 0x1e65a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1e65a4:
    if (ctx->pc == 0x1E65A4u) {
        ctx->pc = 0x1E65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A0u;
        // 0x1e65a4: 0x263103f0  addiu       $s1, $s1, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65A8u;
        goto label_1e65a8;
    }
    ctx->pc = 0x1E65A0u;
    {
        const bool branch_taken_0x1e65a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A0u;
        // 0x1e65a4: 0x263103f0  addiu       $s1, $s1, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65a0) {
            ctx->pc = 0x1E6580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6580;
        }
    }
    ctx->pc = 0x1E65A8u;
label_1e65a8:
    // 0x1e65a8: 0xc0687c4  jal         func_1A1F10
label_1e65ac:
    if (ctx->pc == 0x1E65ACu) {
        ctx->pc = 0x1E65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A8u;
        // 0x1e65ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65B0u;
        goto label_1e65b0;
    }
    ctx->pc = 0x1E65A8u;
    SET_GPR_U32(ctx, 31, 0x1E65B0u);
    ctx->pc = 0x1E65ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65A8u;
    // 0x1e65ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E65A8u, 0x1E65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65B0u;
label_1e65b0:
    // 0x1e65b0: 0xc0687c4  jal         func_1A1F10
label_1e65b4:
    if (ctx->pc == 0x1E65B4u) {
        ctx->pc = 0x1E65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65B0u;
        // 0x1e65b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65B8u;
        goto label_1e65b8;
    }
    ctx->pc = 0x1E65B0u;
    SET_GPR_U32(ctx, 31, 0x1E65B8u);
    ctx->pc = 0x1E65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65B0u;
    // 0x1e65b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E65B0u, 0x1E65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65B8u;
label_1e65b8:
    // 0x1e65b8: 0xc0687c4  jal         func_1A1F10
label_1e65bc:
    if (ctx->pc == 0x1E65BCu) {
        ctx->pc = 0x1E65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65B8u;
        // 0x1e65bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65C0u;
        goto label_1e65c0;
    }
    ctx->pc = 0x1E65B8u;
    SET_GPR_U32(ctx, 31, 0x1E65C0u);
    ctx->pc = 0x1E65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65B8u;
    // 0x1e65bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E65B8u, 0x1E65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65C0u;
label_1e65c0:
    // 0x1e65c0: 0xc0687c4  jal         func_1A1F10
label_1e65c4:
    if (ctx->pc == 0x1E65C4u) {
        ctx->pc = 0x1E65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65C0u;
        // 0x1e65c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65C8u;
        goto label_1e65c8;
    }
    ctx->pc = 0x1E65C0u;
    SET_GPR_U32(ctx, 31, 0x1E65C8u);
    ctx->pc = 0x1E65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65C0u;
    // 0x1e65c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E65C0u, 0x1E65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65C8u;
label_1e65c8:
    // 0x1e65c8: 0xc06e4a4  jal         func_1B9290
label_1e65cc:
    if (ctx->pc == 0x1E65CCu) {
        ctx->pc = 0x1E65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65C8u;
        // 0x1e65cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65D0u;
        goto label_1e65d0;
    }
    ctx->pc = 0x1E65C8u;
    SET_GPR_U32(ctx, 31, 0x1E65D0u);
    ctx->pc = 0x1E65CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65C8u;
    // 0x1e65cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1E65C8u, 0x1E65D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65D0u;
label_1e65d0:
    // 0x1e65d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e65d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e65d4:
    // 0x1e65d4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e65d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e65d8:
    // 0x1e65d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e65d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e65dc:
    // 0x1e65dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e65dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e65e0:
    // 0x1e65e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e65e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e65e4:
    // 0x1e65e4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e65e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e65e8:
    // 0x1e65e8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e65e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e65ec:
    // 0x1e65ec: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1e65ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e65f0:
    // 0x1e65f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e65f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e65f4:
    // 0x1e65f4: 0x3e00008  jr          $ra
label_1e65f8:
    if (ctx->pc == 0x1E65F8u) {
        ctx->pc = 0x1E65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65F4u;
        // 0x1e65f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65FCu;
        goto label_1e65fc;
    }
    ctx->pc = 0x1E65F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65F4u;
        // 0x1e65f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E65F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E65FCu;
label_1e65fc:
    // 0x1e65fc: 0x0  nop
    ctx->pc = 0x1e65fcu;
    // NOP
    ctx->pc = 0x1e6600u;
}
