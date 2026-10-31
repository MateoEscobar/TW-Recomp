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

// Function: sub_001484D8
// Address: 0x1484d8 - 0x148578
void sub_001484D8_0x1484d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001484D8_0x1484d8");
#endif

    switch (ctx->pc) {
        case 0x1484d8u: goto label_1484d8;
        case 0x1484dcu: goto label_1484dc;
        case 0x1484e0u: goto label_1484e0;
        case 0x1484e4u: goto label_1484e4;
        case 0x1484e8u: goto label_1484e8;
        case 0x1484ecu: goto label_1484ec;
        case 0x1484f0u: goto label_1484f0;
        case 0x1484f4u: goto label_1484f4;
        case 0x1484f8u: goto label_1484f8;
        case 0x1484fcu: goto label_1484fc;
        case 0x148500u: goto label_148500;
        case 0x148504u: goto label_148504;
        case 0x148508u: goto label_148508;
        case 0x14850cu: goto label_14850c;
        case 0x148510u: goto label_148510;
        case 0x148514u: goto label_148514;
        case 0x148518u: goto label_148518;
        case 0x14851cu: goto label_14851c;
        case 0x148520u: goto label_148520;
        case 0x148524u: goto label_148524;
        case 0x148528u: goto label_148528;
        case 0x14852cu: goto label_14852c;
        case 0x148530u: goto label_148530;
        case 0x148534u: goto label_148534;
        case 0x148538u: goto label_148538;
        case 0x14853cu: goto label_14853c;
        case 0x148540u: goto label_148540;
        case 0x148544u: goto label_148544;
        case 0x148548u: goto label_148548;
        case 0x14854cu: goto label_14854c;
        case 0x148550u: goto label_148550;
        case 0x148554u: goto label_148554;
        case 0x148558u: goto label_148558;
        case 0x14855cu: goto label_14855c;
        case 0x148560u: goto label_148560;
        case 0x148564u: goto label_148564;
        case 0x148568u: goto label_148568;
        case 0x14856cu: goto label_14856c;
        case 0x148570u: goto label_148570;
        case 0x148574u: goto label_148574;
        default: break;
    }

    ctx->pc = 0x1484d8u;

label_1484d8:
    // 0x1484d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1484d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1484dc:
    // 0x1484dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1484dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1484e0:
    // 0x1484e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1484e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1484e4:
    // 0x1484e4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1484e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1484e8:
    // 0x1484e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1484e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1484ec:
    // 0x1484ec: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1484ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1484f0:
    // 0x1484f0: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x1484f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1484f4:
    // 0x1484f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1484f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1484f8:
    // 0x1484f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1484f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1484fc:
    // 0x1484fc: 0x24a5a088  addiu       $a1, $a1, -0x5F78
    ctx->pc = 0x1484fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942856));
label_148500:
    // 0x148500: 0x2508a0b8  addiu       $t0, $t0, -0x5F48
    ctx->pc = 0x148500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942904));
label_148504:
    // 0x148504: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x148504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_148508:
    // 0x148508: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_14850c:
    // 0x14850c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x14850cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_148510:
    // 0x148510: 0x24090037  addiu       $t1, $zero, 0x37
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_148514:
    // 0x148514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x148514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148518:
    // 0x148518: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_14851c:
    // 0x14851c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x14851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_148520:
    // 0x148520: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x148520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_148524:
    // 0x148524: 0x40f809  jalr        $v0
label_148528:
    if (ctx->pc == 0x148528u) {
        ctx->pc = 0x148528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148524u;
        // 0x148528: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14852Cu;
        goto label_14852c;
    }
    ctx->pc = 0x148524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14852Cu);
        ctx->pc = 0x148528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148524u;
        // 0x148528: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148524u, 0x14852Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14852Cu;
label_14852c:
    // 0x14852c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14852cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148530:
    // 0x148530: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_148534:
    if (ctx->pc == 0x148534u) {
        ctx->pc = 0x148534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148530u;
        // 0x148534: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148538u;
        goto label_148538;
    }
    ctx->pc = 0x148530u;
    {
        const bool branch_taken_0x148530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x148534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148530u;
        // 0x148534: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148530) {
            ctx->pc = 0x14854Cu;
            goto label_14854c;
        }
    }
    ctx->pc = 0x148538u;
label_148538:
    // 0x148538: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x148538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_14853c:
    // 0x14853c: 0x24428118  addiu       $v0, $v0, -0x7EE8
    ctx->pc = 0x14853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934808));
label_148540:
    // 0x148540: 0x24638190  addiu       $v1, $v1, -0x7E70
    ctx->pc = 0x148540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934928));
label_148544:
    // 0x148544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x148544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_148548:
    // 0x148548: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x148548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_14854c:
    // 0x14854c: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x14854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_148550:
    // 0x148550: 0xc055030  jal         func_1540C0
label_148554:
    if (ctx->pc == 0x148554u) {
        ctx->pc = 0x148554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148550u;
        // 0x148554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148558u;
        goto label_148558;
    }
    ctx->pc = 0x148550u;
    SET_GPR_U32(ctx, 31, 0x148558u);
    ctx->pc = 0x148554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148550u;
    // 0x148554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540C0u, 0x148550u, 0x148558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148558u;
label_148558:
    // 0x148558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14855c:
    // 0x14855c: 0xc051622  jal         func_145888
label_148560:
    if (ctx->pc == 0x148560u) {
        ctx->pc = 0x148560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14855Cu;
        // 0x148560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148564u;
        goto label_148564;
    }
    ctx->pc = 0x14855Cu;
    SET_GPR_U32(ctx, 31, 0x148564u);
    ctx->pc = 0x148560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14855Cu;
    // 0x148560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145888u, 0x14855Cu, 0x148564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148564u;
label_148564:
    // 0x148564: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x148564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148568:
    // 0x148568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14856c:
    // 0x14856c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148570:
    // 0x148570: 0x3e00008  jr          $ra
label_148574:
    if (ctx->pc == 0x148574u) {
        ctx->pc = 0x148574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148570u;
        // 0x148574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148578u;
        goto label_fallthrough_0x148570;
    }
    ctx->pc = 0x148570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148570u;
        // 0x148574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x148570:
    ctx->pc = 0x148578u;
}
