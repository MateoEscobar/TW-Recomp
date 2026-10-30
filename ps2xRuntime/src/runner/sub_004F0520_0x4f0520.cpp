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

// Function: sub_004F0520
// Address: 0x4f0520 - 0x4f0588
void sub_004F0520_0x4f0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0520_0x4f0520");
#endif

    switch (ctx->pc) {
        case 0x4f0520u: goto label_4f0520;
        case 0x4f0524u: goto label_4f0524;
        case 0x4f0528u: goto label_4f0528;
        case 0x4f052cu: goto label_4f052c;
        case 0x4f0530u: goto label_4f0530;
        case 0x4f0534u: goto label_4f0534;
        case 0x4f0538u: goto label_4f0538;
        case 0x4f053cu: goto label_4f053c;
        case 0x4f0540u: goto label_4f0540;
        case 0x4f0544u: goto label_4f0544;
        case 0x4f0548u: goto label_4f0548;
        case 0x4f054cu: goto label_4f054c;
        case 0x4f0550u: goto label_4f0550;
        case 0x4f0554u: goto label_4f0554;
        case 0x4f0558u: goto label_4f0558;
        case 0x4f055cu: goto label_4f055c;
        case 0x4f0560u: goto label_4f0560;
        case 0x4f0564u: goto label_4f0564;
        case 0x4f0568u: goto label_4f0568;
        case 0x4f056cu: goto label_4f056c;
        case 0x4f0570u: goto label_4f0570;
        case 0x4f0574u: goto label_4f0574;
        case 0x4f0578u: goto label_4f0578;
        case 0x4f057cu: goto label_4f057c;
        case 0x4f0580u: goto label_4f0580;
        case 0x4f0584u: goto label_4f0584;
        default: break;
    }

    ctx->pc = 0x4f0520u;

label_4f0520:
    // 0x4f0520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0524:
    // 0x4f0524: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f0524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f0528:
    // 0x4f0528: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x4f0528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_4f052c:
    // 0x4f052c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f0530:
    // 0x4f0530: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f0530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f0534:
    // 0x4f0534: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4f0534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f0538:
    // 0x4f0538: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4f0538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f053c:
    // 0x4f053c: 0x84e30078  lh          $v1, 0x78($a3)
    ctx->pc = 0x4f053cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 120)));
label_4f0540:
    // 0x4f0540: 0x8ce2007c  lw          $v0, 0x7C($a3)
    ctx->pc = 0x4f0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
label_4f0544:
    // 0x4f0544: 0x40f809  jalr        $v0
label_4f0548:
    if (ctx->pc == 0x4F0548u) {
        ctx->pc = 0x4F0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0544u;
        // 0x4f0548: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F054Cu;
        goto label_4f054c;
    }
    ctx->pc = 0x4F0544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F054Cu);
        ctx->pc = 0x4F0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0544u;
        // 0x4f0548: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0544u, 0x4F054Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F054Cu;
label_4f054c:
    // 0x4f054c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0550:
    // 0x4f0550: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x4f0550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f0554:
    // 0x4f0554: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4f0558:
    if (ctx->pc == 0x4F0558u) {
        ctx->pc = 0x4F0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0554u;
        // 0x4f0558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F055Cu;
        goto label_4f055c;
    }
    ctx->pc = 0x4F0554u;
    {
        const bool branch_taken_0x4f0554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0554u;
        // 0x4f0558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0554) {
            ctx->pc = 0x4F0570u;
            goto label_4f0570;
        }
    }
    ctx->pc = 0x4F055Cu;
label_4f055c:
    // 0x4f055c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f0560:
    // 0x4f0560: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x4f0560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f0564:
    // 0x4f0564: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_4f0568:
    if (ctx->pc == 0x4F0568u) {
        ctx->pc = 0x4F0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0564u;
        // 0x4f0568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F056Cu;
        goto label_4f056c;
    }
    ctx->pc = 0x4F0564u;
    {
        const bool branch_taken_0x4f0564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0564u;
        // 0x4f0568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0564) {
            ctx->pc = 0x4F0570u;
            goto label_4f0570;
        }
    }
    ctx->pc = 0x4F056Cu;
label_4f056c:
    // 0x4f056c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4f056cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0570:
    // 0x4f0570: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f0570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0574:
    // 0x4f0574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0578:
    // 0x4f0578: 0x3e00008  jr          $ra
label_4f057c:
    if (ctx->pc == 0x4F057Cu) {
        ctx->pc = 0x4F057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0578u;
        // 0x4f057c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0580u;
        goto label_4f0580;
    }
    ctx->pc = 0x4F0578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0578u;
        // 0x4f057c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0580u;
label_4f0580:
    // 0x4f0580: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4f0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4f0584:
    // 0x4f0584: 0x0  nop
    ctx->pc = 0x4f0584u;
    // NOP
    ctx->pc = 0x4f0588u;
}
