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

// Function: sub_00235530
// Address: 0x235530 - 0x2355a0
void sub_00235530_0x235530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235530_0x235530");
#endif

    switch (ctx->pc) {
        case 0x235530u: goto label_235530;
        case 0x235534u: goto label_235534;
        case 0x235538u: goto label_235538;
        case 0x23553cu: goto label_23553c;
        case 0x235540u: goto label_235540;
        case 0x235544u: goto label_235544;
        case 0x235548u: goto label_235548;
        case 0x23554cu: goto label_23554c;
        case 0x235550u: goto label_235550;
        case 0x235554u: goto label_235554;
        case 0x235558u: goto label_235558;
        case 0x23555cu: goto label_23555c;
        case 0x235560u: goto label_235560;
        case 0x235564u: goto label_235564;
        case 0x235568u: goto label_235568;
        case 0x23556cu: goto label_23556c;
        case 0x235570u: goto label_235570;
        case 0x235574u: goto label_235574;
        case 0x235578u: goto label_235578;
        case 0x23557cu: goto label_23557c;
        case 0x235580u: goto label_235580;
        case 0x235584u: goto label_235584;
        case 0x235588u: goto label_235588;
        case 0x23558cu: goto label_23558c;
        case 0x235590u: goto label_235590;
        case 0x235594u: goto label_235594;
        case 0x235598u: goto label_235598;
        case 0x23559cu: goto label_23559c;
        default: break;
    }

    ctx->pc = 0x235530u;

label_235530:
    // 0x235530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_235534:
    // 0x235534: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_235538:
    // 0x235538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23553c:
    // 0x23553c: 0xc0e4060  jal         func_390180
label_235540:
    if (ctx->pc == 0x235540u) {
        ctx->pc = 0x235540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23553Cu;
        // 0x235540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235544u;
        goto label_235544;
    }
    ctx->pc = 0x23553Cu;
    SET_GPR_U32(ctx, 31, 0x235544u);
    ctx->pc = 0x235540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23553Cu;
    // 0x235540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23553Cu, 0x235544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235544u;
label_235544:
    // 0x235544: 0xc08a61a  jal         func_229868
label_235548:
    if (ctx->pc == 0x235548u) {
        ctx->pc = 0x235548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235544u;
        // 0x235548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23554Cu;
        goto label_23554c;
    }
    ctx->pc = 0x235544u;
    SET_GPR_U32(ctx, 31, 0x23554Cu);
    ctx->pc = 0x235548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235544u;
    // 0x235548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235544u, 0x23554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23554Cu;
label_23554c:
    // 0x23554c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_235550:
    if (ctx->pc == 0x235550u) {
        ctx->pc = 0x235550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23554Cu;
        // 0x235550: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235554u;
        goto label_235554;
    }
    ctx->pc = 0x23554Cu;
    {
        const bool branch_taken_0x23554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23554Cu;
        // 0x235550: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23554c) {
            ctx->pc = 0x23555Cu;
            goto label_23555c;
        }
    }
    ctx->pc = 0x235554u;
label_235554:
    // 0x235554: 0x1000000e  b           . + 4 + (0xE << 2)
label_235558:
    if (ctx->pc == 0x235558u) {
        ctx->pc = 0x235558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235554u;
        // 0x235558: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23555Cu;
        goto label_23555c;
    }
    ctx->pc = 0x235554u;
    {
        const bool branch_taken_0x235554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235554u;
        // 0x235558: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235554) {
            ctx->pc = 0x235590u;
            goto label_235590;
        }
    }
    ctx->pc = 0x23555Cu;
label_23555c:
    // 0x23555c: 0xc0e4060  jal         func_390180
label_235560:
    if (ctx->pc == 0x235560u) {
        ctx->pc = 0x235560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23555Cu;
        // 0x235560: 0x24440364  addiu       $a0, $v0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235564u;
        goto label_235564;
    }
    ctx->pc = 0x23555Cu;
    SET_GPR_U32(ctx, 31, 0x235564u);
    ctx->pc = 0x235560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23555Cu;
    // 0x235560: 0x24440364  addiu       $a0, $v0, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23555Cu, 0x235564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235564u;
label_235564:
    // 0x235564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235568:
    // 0x235568: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_23556c:
    if (ctx->pc == 0x23556Cu) {
        ctx->pc = 0x23556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235568u;
        // 0x23556c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235570u;
        goto label_235570;
    }
    ctx->pc = 0x235568u;
    {
        const bool branch_taken_0x235568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235568u;
        // 0x23556c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235568) {
            ctx->pc = 0x23558Cu;
            goto label_23558c;
        }
    }
    ctx->pc = 0x235570u;
label_235570:
    // 0x235570: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x235570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_235574:
    // 0x235574: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x235574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_235578:
    // 0x235578: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x235578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_23557c:
    // 0x23557c: 0x40f809  jalr        $v0
label_235580:
    if (ctx->pc == 0x235580u) {
        ctx->pc = 0x235580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23557Cu;
        // 0x235580: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235584u;
        goto label_235584;
    }
    ctx->pc = 0x23557Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235584u);
        ctx->pc = 0x235580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23557Cu;
        // 0x235580: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23557Cu, 0x235584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235584u;
label_235584:
    // 0x235584: 0x10000003  b           . + 4 + (0x3 << 2)
label_235588:
    if (ctx->pc == 0x235588u) {
        ctx->pc = 0x235588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235584u;
        // 0x235588: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23558Cu;
        goto label_23558c;
    }
    ctx->pc = 0x235584u;
    {
        const bool branch_taken_0x235584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235584u;
        // 0x235588: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235584) {
            ctx->pc = 0x235594u;
            goto label_235594;
        }
    }
    ctx->pc = 0x23558Cu;
label_23558c:
    // 0x23558c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x23558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_235590:
    // 0x235590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235594:
    // 0x235594: 0x3e00008  jr          $ra
label_235598:
    if (ctx->pc == 0x235598u) {
        ctx->pc = 0x235598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235594u;
        // 0x235598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23559Cu;
        goto label_23559c;
    }
    ctx->pc = 0x235594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235594u;
        // 0x235598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23559Cu;
label_23559c:
    // 0x23559c: 0x0  nop
    ctx->pc = 0x23559cu;
    // NOP
    ctx->pc = 0x2355a0u;
}
