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

// Function: sub_004D0518
// Address: 0x4d0518 - 0x4d05a0
void sub_004D0518_0x4d0518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0518_0x4d0518");
#endif

    switch (ctx->pc) {
        case 0x4d0518u: goto label_4d0518;
        case 0x4d051cu: goto label_4d051c;
        case 0x4d0520u: goto label_4d0520;
        case 0x4d0524u: goto label_4d0524;
        case 0x4d0528u: goto label_4d0528;
        case 0x4d052cu: goto label_4d052c;
        case 0x4d0530u: goto label_4d0530;
        case 0x4d0534u: goto label_4d0534;
        case 0x4d0538u: goto label_4d0538;
        case 0x4d053cu: goto label_4d053c;
        case 0x4d0540u: goto label_4d0540;
        case 0x4d0544u: goto label_4d0544;
        case 0x4d0548u: goto label_4d0548;
        case 0x4d054cu: goto label_4d054c;
        case 0x4d0550u: goto label_4d0550;
        case 0x4d0554u: goto label_4d0554;
        case 0x4d0558u: goto label_4d0558;
        case 0x4d055cu: goto label_4d055c;
        case 0x4d0560u: goto label_4d0560;
        case 0x4d0564u: goto label_4d0564;
        case 0x4d0568u: goto label_4d0568;
        case 0x4d056cu: goto label_4d056c;
        case 0x4d0570u: goto label_4d0570;
        case 0x4d0574u: goto label_4d0574;
        case 0x4d0578u: goto label_4d0578;
        case 0x4d057cu: goto label_4d057c;
        case 0x4d0580u: goto label_4d0580;
        case 0x4d0584u: goto label_4d0584;
        case 0x4d0588u: goto label_4d0588;
        case 0x4d058cu: goto label_4d058c;
        case 0x4d0590u: goto label_4d0590;
        case 0x4d0594u: goto label_4d0594;
        case 0x4d0598u: goto label_4d0598;
        case 0x4d059cu: goto label_4d059c;
        default: break;
    }

    ctx->pc = 0x4d0518u;

label_4d0518:
    // 0x4d0518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d0518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d051c:
    // 0x4d051c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d0520:
    // 0x4d0520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d0520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d0524:
    // 0x4d0524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d0524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0528:
    // 0x4d0528: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4d0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4d052c:
    // 0x4d052c: 0x40f809  jalr        $v0
label_4d0530:
    if (ctx->pc == 0x4D0530u) {
        ctx->pc = 0x4D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D052Cu;
        // 0x4d0530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0534u;
        goto label_4d0534;
    }
    ctx->pc = 0x4D052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D0534u);
        ctx->pc = 0x4D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D052Cu;
        // 0x4d0530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D052Cu, 0x4D0534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D0534u;
label_4d0534:
    // 0x4d0534: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4d0534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4d0538:
    // 0x4d0538: 0x8c8239d0  lw          $v0, 0x39D0($a0)
    ctx->pc = 0x4d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14800)));
label_4d053c:
    // 0x4d053c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_4d0540:
    if (ctx->pc == 0x4D0540u) {
        ctx->pc = 0x4D0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D053Cu;
        // 0x4d0540: 0x8e0300a8  lw          $v1, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0544u;
        goto label_4d0544;
    }
    ctx->pc = 0x4D053Cu;
    {
        const bool branch_taken_0x4d053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4d053c) {
            ctx->pc = 0x4D0540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D053Cu;
            // 0x4d0540: 0x8e0300a8  lw          $v1, 0xA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0550u;
            goto label_4d0550;
        }
    }
    ctx->pc = 0x4D0544u;
label_4d0544:
    // 0x4d0544: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x4d0544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_4d0548:
    // 0x4d0548: 0xac8239d0  sw          $v0, 0x39D0($a0)
    ctx->pc = 0x4d0548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14800), GPR_U32(ctx, 2));
label_4d054c:
    // 0x4d054c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x4d054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_4d0550:
    // 0x4d0550: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4d0554:
    if (ctx->pc == 0x4D0554u) {
        ctx->pc = 0x4D0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0550u;
        // 0x4d0554: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0558u;
        goto label_4d0558;
    }
    ctx->pc = 0x4D0550u;
    {
        const bool branch_taken_0x4d0550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0550) {
            ctx->pc = 0x4D0554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0550u;
            // 0x4d0554: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0564u;
            goto label_4d0564;
        }
    }
    ctx->pc = 0x4D0558u;
label_4d0558:
    // 0x4d0558: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x4d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_4d055c:
    // 0x4d055c: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x4d055cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
label_4d0560:
    // 0x4d0560: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x4d0560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_4d0564:
    // 0x4d0564: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4d0568:
    if (ctx->pc == 0x4D0568u) {
        ctx->pc = 0x4D0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0564u;
        // 0x4d0568: 0x8c8239d0  lw          $v0, 0x39D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D056Cu;
        goto label_4d056c;
    }
    ctx->pc = 0x4D0564u;
    {
        const bool branch_taken_0x4d0564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0564u;
        // 0x4d0568: 0x8c8239d0  lw          $v0, 0x39D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0564) {
            ctx->pc = 0x4D0578u;
            goto label_4d0578;
        }
    }
    ctx->pc = 0x4D056Cu;
label_4d056c:
    // 0x4d056c: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x4d056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_4d0570:
    // 0x4d0570: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x4d0570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
label_4d0574:
    // 0x4d0574: 0x8c8239d0  lw          $v0, 0x39D0($a0)
    ctx->pc = 0x4d0574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14800)));
label_4d0578:
    // 0x4d0578: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4d057c:
    if (ctx->pc == 0x4D057Cu) {
        ctx->pc = 0x4D057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0578u;
        // 0x4d057c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0580u;
        goto label_4d0580;
    }
    ctx->pc = 0x4D0578u;
    {
        const bool branch_taken_0x4d0578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0578u;
        // 0x4d057c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0578) {
            ctx->pc = 0x4D0590u;
            goto label_4d0590;
        }
    }
    ctx->pc = 0x4D0580u;
label_4d0580:
    // 0x4d0580: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4d0580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4d0584:
    // 0x4d0584: 0xc1333d6  jal         func_4CCF58
label_4d0588:
    if (ctx->pc == 0x4D0588u) {
        ctx->pc = 0x4D0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0584u;
        // 0x4d0588: 0x24844ac0  addiu       $a0, $a0, 0x4AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D058Cu;
        goto label_4d058c;
    }
    ctx->pc = 0x4D0584u;
    SET_GPR_U32(ctx, 31, 0x4D058Cu);
    ctx->pc = 0x4D0588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0584u;
    // 0x4d0588: 0x24844ac0  addiu       $a0, $a0, 0x4AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCF58u, 0x4D0584u, 0x4D058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D058Cu;
label_4d058c:
    // 0x4d058c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d058cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0590:
    // 0x4d0590: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d0590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d0594:
    // 0x4d0594: 0x3e00008  jr          $ra
label_4d0598:
    if (ctx->pc == 0x4D0598u) {
        ctx->pc = 0x4D0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0594u;
        // 0x4d0598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D059Cu;
        goto label_4d059c;
    }
    ctx->pc = 0x4D0594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0594u;
        // 0x4d0598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D059Cu;
label_4d059c:
    // 0x4d059c: 0x0  nop
    ctx->pc = 0x4d059cu;
    // NOP
    ctx->pc = 0x4d05a0u;
}
